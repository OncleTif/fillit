/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_reader.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 14:04:19 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/08 12:08:10 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_input_reader(int fd, char ltr)
{
	t_piece	*piece;
	char	buf[BUF_SIZE + 1];
	int		ret;

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
		if (ret == -1 || buf[0] != '\n')
			ft_error("ft_input_reader erreur sur la separation piece");
		piece->next = ft_input_reader(fd, ltr + 1);
		if (!piece->next)
			ft_error("ft_input_reader pas de piece apres dernier \n");
	}
	else
		ft_error("erreur de read");
	return (piece);
}
