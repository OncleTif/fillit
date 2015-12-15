/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_finisher.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 15:30:11 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/15 16:31:14 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_piece_finisher(t_piece *p, char ltr)
{
	int i;
	int j;
	int sided;

	i = 0;
	p->ltr = ltr;
	while (i < 4)
	{
		sided = 0;
		j = i + 1;
		while (j < 4 && !sided)
		{
			if (((p->sq[i][0] == p->sq[j][0]) &&
						((p->sq[i][1] == p->sq[j][1] + 1) ||
						 (p->sq[i][1] == p->sq[j][1] - 1))) ||
					((p->sq[i][1] == p->sq[j][1]) &&
					 ((p->sq[i][0] == p->sq[j][0] + 1) ||
					  (p->sq[i][0] == p->sq[j][0] - 1))))
				sided = 1;
			j++;
		}
		if (!sided)
			ft_error("error");
		i++;
	}
}
