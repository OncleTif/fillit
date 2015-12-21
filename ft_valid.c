/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:52:16 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/21 14:59:00 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_valid(t_grid *grid, t_piece *piece, int x, int y)
{
	int i;

	i = 0;
	if (grid->grid[x][y] || piece->ymin + y < 0
			|| piece->xmax + x >= grid->size || piece->ymax + y >= grid->size)
		return (0);
	while (i < 4)
	{
		if (grid->grid[x + piece->sq[i][0]][y + piece->sq[i][1]] != 0)
			return (0);
		i++;
	}
	return (1);
}
