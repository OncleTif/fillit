/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:52:16 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/15 18:52:24 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
// doit tester pour voir si la piece rentre, il faut definir le format de la 
// piece et celui de pos et grille avant de pouvoir la def
int	ft_valid(char **grid, t_piece *piece, pos)
{

}

int	ft_posvalid(char **grid, pos)
{
	if (grid->size * grid ->size >= pos)
		return (1);
	return (0);
}
