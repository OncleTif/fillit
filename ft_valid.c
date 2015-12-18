/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:52:16 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/18 13:44:15 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_valid(t_grid *grid, t_piece *piece, int x, int y)
{
	int i;

	i = 0;
	if (piece->xmin + x < 0 || piece->xmax + x >= grid->size
			|| piece->ymin + x < 0 || piece->ymax + y >= grid->size)
		return (0);
	while (i < 4)
	{
		if (grid->grid[x + piece->sq[i][0]][y + piece->sq[i][1]] != 0)
			return (0);
		i++;
	}
	return (1);
}
