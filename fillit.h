/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 10:26:57 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/14 15:29:36 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include "libft.h"

# define BUF_SIZE 20

typedef struct		s_piece
{
	int				height;
	int				width;
	int				sq[4][2];
	char			ltr;
}					t_piece;

void				ft_error(char *str);
t_list				*ft_input_reader(int fd, char ltr);
t_piece				*ft_piece_creator(char *buf, char ltr);
void				ft_piece_finisher(t_piece *piece, char ltr);

#endif