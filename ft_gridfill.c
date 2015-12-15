/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gridfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:45:41 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/15 19:11:57 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_gridfill(char **grid, t_piece *piece)
{
	int pos;

	pos = 0;
	while(pos  <= grid->size)
	{
		if (ft_valid(grid, piece, pos))
		{
			ft_insert(grid, piece, pos);
			if (piece->next)
				return (ft_gridfill(grid, piece->next));
			return (grid);
		}
		pos++;
	}
	return (0);
}

// il faut definir le type de pos
// il faut une fct pour verifier que pos + 1 est dans grid
