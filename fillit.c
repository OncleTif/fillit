/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 16:27:12 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/18 16:32:13 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	t_piece	*piece;

	if (argc != 2)
		ft_error("error");
	fd = open(argv[1], O_RDONLY);
	if (!fd)
		ft_error("error");
	piece = ft_input_reader(fd, 'A');
	while (piece)
	{
		test_ft_printpiece(piece);
		piece = piece->next;
	}
	return (0);
}
