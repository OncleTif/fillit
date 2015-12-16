/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newgrid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 17:43:00 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/16 19:16:19 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_grid	*ft_newgrid(int size)
{
	t_grid	*newgrid;
	int		i;

	if (!(newgrid = (t_grid*)ft_memalloc(sizeof(t_grid))))
		return (NULL);
	newgrid->size = size;
	if (!(newgrid->grid = (char**)ft_memalloc(sizeof(char*) * size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (!(newgrid->grid[i] = (char*)ft_memalloc(sizeof(char) * (size + 1))))
			return (NULL);
		i++;
	}
	return (newgrid);
}
