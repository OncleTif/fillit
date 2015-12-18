/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_reader.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 14:04:19 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/18 18:12:42 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_input_reader(int fd, char ltr)
{
	t_piece	*piece;
	char	buf[BUF_SIZE + 1];
	size_t	ret;

	piece = NULL;
	ret = read(fd, buf, BUF_SIZE);
	if (ret > 0)
	{
		buf[ret] = 0;
		if (ret < 20)
			ft_error("buffer inferieur a 20");
		piece = ft_piece_creator(buf, ltr);
		ret = read(fd, buf, 1);
		if (!ret)
			return (piece);
		if (buf[0] != '\n')
			ft_error("ft_input_reader erreur sur la separation piece");
		piece->next = ft_input_reader(fd, ltr + 1);
	}
	return (piece);
}
