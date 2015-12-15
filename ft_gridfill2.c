/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gridfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:45:41 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/15 17:32:13 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_gridfill(char **grid, t_piece *piece)
{
	if (ft_valid(grid, piece, pos))
	{
		ft_insert(grid, piece, pos);
		if (piece->next)
			return (ft_gridfill(grid, piece->next), 0)
		return (grid);
	}
	if (ft_posvalid(pos + 1))
		return (ft_gridfill(grid, piece, pos + 1));
	return (0);
}

// il faut definir le type de pos
// il faut une fct pour verifier que pos + 1 est dans grid
