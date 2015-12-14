/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_creator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 14:48:13 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/14 15:29:38 by tmanet           ###   ########.fr       */
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
	piece = (t_piece*)ft_memalloc(sizeof(t_piece));
	if (!piece)
		ft_error("error");
	while (buf[i])
	{
		if (buf[i] == '#' && i % 5 != 4)
		{
			piece->sq[n_case][0] = i / 5;
			piece->sq[n_case][1] = i % 5;
			n_case++;
		}
		else if (!(buf[i] == '\n' && (i % 5 == 4 || i == 20)) &&
				!(buf[i] == '.' && i % 5 != 4))
			ft_error("error");
		i++;
	}
	ft_piece_finisher(piece, ltr);
	return (piece);
}
