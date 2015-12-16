/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:09:19 by tfolly            #+#    #+#             */
/*   Updated: 2015/12/16 17:02:07 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

//prend en entree une chaine de char et la decoupe en liste chainee qui comprend
//toutes les differentes pieces
//addpiece ajoute un chainon a la liste, cree la liste si celle ci nexiste pas
//renvoi ladresse de la liste
//addpiece donne la lettre correcte
t_piece		**ft_read(int fd)
{
	size_t	ret;
	char	buf[BUFF_SIZE];
	t_piece **chaine;

	*chaine = 0;
	while((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{	
		if (!ft_piecevalid(buf))
			return (0); //utiliser ft_error ici ?
		ft_addpiece(chaine, buf);
	}
	return (chaine);
}
