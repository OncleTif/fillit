/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_creator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 14:48:13 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/18 13:52:58 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_piece_creator(char *buf, char ltr)
{
	int		i;
	t_piece	*piece;
	int		n_case;

	i = 0;
	n_case = 0;
	if (!ft_piecevalid(buf))
		ft_error("ft_piece_creator 1er test");
	piece = (t_piece*)ft_memalloc(sizeof(t_piece));
	if (!piece)
		ft_error("ft_piece_creator 2eme test");
	while (buf[i] && n_case < 4)
	{
		if (buf[i] == '#')
		{
			piece->sq[n_case][0] = i / 5;
			piece->sq[n_case][1] = i % 5;
			n_case++;
		}
		i++;
	}
	ft_piece_finisher(piece, ltr);
	return (piece);
}
