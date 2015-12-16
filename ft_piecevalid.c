#include "fillit.h"

//piece lue dans le buffer valide ?
//il faut 21 char
//seulement des # et . et \n
//exactement 4 #
//un \n tous les 4 char et seulement la
//chaque # doit se toucher

static int	ft_htouch(char *str) //verifie que les # se touchent
{
	 int i;

	 i = 0;
	 while (i < 21) // je vais segfault sur les bords, il faut reecrire les conds mais cest dans cette idee
	 {
		 if (str[i] == '#')
			 if (!(str[i - 1] == '#' || str[i + 1] == '#' || str[i - 5] == '#' || str[i + 5] == '#'))
				 return (0);
		 i++;
	 }
}

static int	ft_nend(char *str) //verifie que les \n sont bien a la fin des lignes
{
	int i;

	i = 1;
	while (i < 21)
	{
		if (i % 5 == 4 && str[i] != '\n')
			return (0);
	}
	if (str[20] != '\n')
		return (0); // est ce que cond vrai pour el dernier aussi ??
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
		if (str[i] != '.' || str[i] != '#' || str[i] != '\n')
			return (0);
		if (str[i] == '\n')
			ncount++;
		if (str[i] == '#')
			hcount++;

	}
	if (ncount != 5 || hcount != 4)
		return (0);
	return (ft_nend(str) && ft_htouch(str));
}
