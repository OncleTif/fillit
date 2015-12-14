/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_reader.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 14:04:19 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/14 16:27:56 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*ft_input_reader(int fd, char ltr)
{
	t_list	*elem;
	t_piece	*piece;
	char	buf[BUF_SIZE + 1];
	size_t	ret;

	ret = read(fd, buf, BUF_SIZE);
	if (ret)
		buf[ret] = 0;
	piece = ft_piece_creator(buf, ltr);
	elem = ft_lstnew(piece, sizeof(piece));
	elem->next = ft_input_reader(fd, ltr + 1);
	return (elem);
}