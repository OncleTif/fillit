/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_reader.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 14:04:19 by tmanet            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/12/18 16:23:53 by tmanet           ###   ########.fr       */
=======
/*   Updated: 2015/12/18 15:53:52 by tfolly           ###   ########.fr       */
>>>>>>> 0edcee23720d52c33c4fc3d312c07f2a639f0178
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*ft_input_reader(int fd, char ltr)
{
	t_list	*elem;
	t_piece	*piece;
	char	buf[BUF_SIZE + 1];
	size_t	ret;

	elem = NULL;
	ret = read(fd, buf, BUF_SIZE);
	if (ret > 0)
	{
		buf[ret] = 0;
<<<<<<< HEAD
		if ( ret < 20)
			ft_error("buffer inferieur a 20");
=======
		if (ret < 20)
			ft_error("error");
>>>>>>> 0edcee23720d52c33c4fc3d312c07f2a639f0178
		piece = ft_piece_creator(buf, ltr);
		ret = read(fd, buf, 1);
		if (ret)
			if (buf[0] != '\n')
				ft_error("ft_input_reader erreur sur la separation piece");
		piece->next = ft_input_reader(fd, ltr + 1);
	}
	return (elem);
}
