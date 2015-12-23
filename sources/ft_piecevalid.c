/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piecevalid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 15:50:53 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/23 12:38:55 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_is_stuck(char pt[4])
{
	int	stuck;
	int	i;
	int	j;
	int	contacts;

	i = 0;
	stuck = 1;
	contacts = 0;
	while (i < 4 && stuck)
	{
		j = 0;
		stuck = 0;
		while (j < 4)
		{
			if (pt[i] == pt[j] + 1 || pt[i] == pt[j] - 1
					|| pt[i] == pt[j] + 5 || pt[i] == pt[j] - 5)
			{
				stuck = 1;
				contacts++;
			}
			j++;
		}
		i++;
	}
	return (stuck && (contacts > 4));
}

static int	ft_htouch(char *str)
{
	int		i;
	int		j;
	char	pt[4];

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			pt[j] = i;
			j++;
		}
		i++;
	}
	return (ft_is_stuck(pt));
}

static int	ft_nend(char *str)
{
	int i;

	i = 1;
	while (str[i])
	{
		if (i % 5 == 4 && str[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int			ft_piecevalid(char *str)
{
	int	i;
	int	ncount;
	int	hcount;

	i = 0;
	ncount = 0;
	hcount = 0;
	while (i < 20)
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		if (str[i] == '\n')
			ncount++;
		if (str[i] == '#')
			hcount++;
		i++;
	}
	if (ncount != 4 || hcount != 4)
		return (0);
	return (ft_nend(str) && ft_htouch(str));
}
