/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:52:16 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/15 17:11:18 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_valid(char **grid, t_piece *piece, pos)
{

}

int	ft_posvalid(char **grid, pos)
{
	if (grid->size >= pos)
		return (1);
	return (0);
}
