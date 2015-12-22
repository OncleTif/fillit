/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_finisher.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 15:30:11 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/21 15:00:16 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_piece_finisher(t_piece *p, char ltr)
{
	int i;

	i = 1;
	p->ltr = ltr;
	ft_piece_positioner(p);
	while (i < 4)
	{
		if (p->ymin > p->sq[i][1])
			p->ymin = p->sq[i][1];
		if (p->xmax < p->sq[i][0])
			p->xmax = p->sq[i][0];
		if (p->ymax < p->sq[i][1])
			p->ymax = p->sq[i][1];
		i++;
	}
}
