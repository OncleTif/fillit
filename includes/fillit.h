/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 10:26:57 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/21 15:09:57 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include "libft.h"

# define BUF_SIZE 20

typedef struct		s_grid
{
	int				size;
	char			**grid;
}					t_grid;

typedef struct		s_piece
{
	int				xmax;
	int				ymin;
	int				ymax;
	int				sq[4][2];
	char			ltr;
	struct s_piece	*next;
}					t_piece;

void				ft_error(char *str);
t_piece				*ft_input_reader(int fd, char ltr);
t_piece				*ft_piece_creator(char *buf, char ltr);
void				ft_piece_finisher(t_piece *piece, char ltr);
void				ft_piece_positioner(t_piece *piece);
int					ft_piecevalid(char *buf);
void				test_ft_printpiece(t_piece *p);
t_grid				*ft_newgrid(int size);
void				ft_printgrid(t_grid *grid);
int					ft_valid(t_grid *grid, t_piece *piece, int x, int y);
void				ft_insert(t_grid *grid, t_piece *piece, int x, int y);
t_grid				*ft_gridcpy(t_grid *grid);
void				ft_griddel(t_grid *grid);
int					ft_gridsize(int nbrpiece);
int					ft_nbrpiece(t_piece *piece);
t_grid				*ft_gridfill(t_grid *grid, t_piece *piece);
#endif
