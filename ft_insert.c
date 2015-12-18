/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 14:49:37 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/18 14:54:33 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fillit.h"

void	ft_insert(t_grid *grid, t_piece *piece, int x, int y)
{
	int i;

	i = 0;
	while (i < 4)
	{
		grid->grid[x + piece->sq[i][0]][y + piece->sq[i][1]] = piece->ltr;
		i++;
	}
}
