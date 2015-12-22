/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gridfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:45:41 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/21 14:55:48 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_grid	*ft_gridfill(t_grid *grid, t_piece *piece)
{
	int		x;
	int		y;
	t_grid	*newgrid;
	t_grid	*found;

	x = 0;
	found = NULL;
	while (x < grid->size && !found)
	{
		y = 0;
		while (y < grid->size && !found)
		{
			if (ft_valid(grid, piece, x, y))
			{
				newgrid = ft_gridcpy(grid);
				ft_insert(newgrid, piece, x, y);
				if (!piece->next)
					return (newgrid);
				found = ft_gridfill(newgrid, piece->next);
			}
			y++;
		}
		x++;
	}
	return (found);
}
