/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gridcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 16:11:24 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/18 16:27:15 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_grid	*ft_gridcpy(t_grid *grid)
{
	t_grid	*newgrid;
	int		i;
	int		j;

	if (!(newgrid = ft_newgrid(grid->size)))
		return (NULL);
	i = 0;
	while (i < grid->size)
	{
		j = 0;
		while (j < grid->size)
		{
			newgrid->grid[i][j] = grid->grid[i][j];
			j++;
		}
		i++;
	}
	return (newgrid);
}
