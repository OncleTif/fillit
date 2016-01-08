/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 16:27:12 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/08 12:04:10 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	t_piece	*piece;
	t_grid	*grid;
	int		size;

	if (argc != 2)
		ft_error("error");
	fd = open(argv[1], O_RDONLY);
	if (fd < 1)
		ft_error("error");
	piece = ft_input_reader(fd, 'A');
	size = ft_gridsize(ft_nbrpiece(piece));
	grid = NULL;
	while (!grid)
	{
		grid = ft_newgrid(size);
		grid = ft_gridfill(grid, piece);
		size++;
	}
	ft_printgrid(grid);
	return (0);
}
