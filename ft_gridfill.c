/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gridfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:45:41 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/18 15:53:16 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_gridfill(t_grid *grid, t_piece *piece)
{
	int x;
	int y;

	x = 0;
	while (x <= grid->size)
	{
		y = 0;
		while (y <= grid->size)
		{
			if (ft_valid(grid, piece, x, y))
			{
				ft_insert(grid, piece, x, y);
				if (piece->next)
					return (ft_gridfill(grid, piece->next));
				return (grid);
			}
			y++;
		}
		x++;
	}
	return (0);
}
