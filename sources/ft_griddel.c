/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_griddel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 18:53:54 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/18 14:39:20 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_griddel(t_grid *grid)
{
	t_grid	*tmp;
	int		i;

	tmp = grid;
	i = 0;
	while (i < grid->size)
	{
		free(tmp->grid[i]);
		tmp->grid[i] = NULL;
		i++;
	}
	free(tmp->grid);
	tmp->grid = NULL;
	free(tmp);
	tmp = NULL;
}
