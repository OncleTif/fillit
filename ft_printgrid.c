/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printgrid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 13:46:29 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/18 16:35:29 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_printgrid(t_grid *grid)
{
	int i;
	int j;

	i = 0;
	while (i < grid->size)
	{
		j = 0;
		while (j < grid->size)
		{
			if (grid->grid[i][j])
				ft_putchar(grid->grid[i][j]);
			else
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
