/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gridfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:45:41 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/18 16:10:25 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_grid	*ft_gridfill(t_grid *grid, t_piece *piece)
{
	int 	x;
	int 	y;
	t_grid	*newgrid;

	x = 0;
	while (x <= grid->size)
	{
		y = 0;
		while (y <= grid->size)
		{
			if (ft_valid(grid, piece, x, y))
			{
				newgrid = ft_gridcpy(grid);
				ft_insert(newgrid, piece, x, y);
				if (piece->next)
					return (ft_gridfill(newgrid, piece->next));
				return (newgrid);
			}
			y++;
		}
		x++;
	}
	return (0);
}
