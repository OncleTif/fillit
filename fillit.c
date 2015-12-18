/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 16:27:12 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/18 17:38:26 by tfolly           ###   ########.fr       */
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
	return (0);
}
