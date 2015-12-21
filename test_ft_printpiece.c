/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printpiece.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 12:01:18 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/21 15:10:38 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	test_ft_printpiece(t_piece *p)
{
	int	i;

	ft_putendl("****************");
	ft_putstr("Piece : ");
	ft_putchar(p->ltr);
	ft_putchar('\n');
	ft_putstr("xmin : ");
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putstr("ymin : ");
	ft_putnbr(p->ymin);
	ft_putchar('\n');
	ft_putstr("xmax : ");
	ft_putnbr(p->xmax);
	ft_putchar('\n');
	ft_putstr("ymax : ");
	ft_putnbr(p->ymax);
	ft_putchar('\n');
	ft_putstr("address next : ");
	ft_putnbr((int)p->next);
	ft_putchar('\n');
	i = 0;
	while (i < 4)
	{
		ft_putnbr(p->sq[i][0]);
		ft_putstr(" , ");
		ft_putnbr(p->sq[i][1]);
		ft_putchar('\n');
		i++;
	}
}
