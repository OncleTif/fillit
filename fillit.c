/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 10:40:03 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/14 16:12:35 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	t_list	*lst;

	if (argc != 2)
		ft_error("error");
	fd = open(argv[1], O_RDONLY);
	if (!fd)
		ft_error("error");
	lst = ft_input_reader(fd, 'A');
	return (0);
}
