/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 10:40:03 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/18 13:24:59 by tmanet           ###   ########.fr       */
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
	while (lst)
	{
test_ft_printpiece(lst->content);
		lst = lst->next;
	}
	return (0);
}
