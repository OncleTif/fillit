#include "fillit.h"

//piece lue dans le buffer valide ?
//il faut 21 char
//seulement des # et . et \n
//exactement 4 #
//un \n tous les 4 char et seulement la
//chaque # doit se toucher

static int	ft_is_stuck(char pt[4])
{
	int	stuck;
	int	i;
	int	j;

	i = 0;
	stuck = 1;
	while (i < 4 && stuck)
	{
		j = 0;
		stuck = 0;
		while (j < 4)
		{
			if (pt[i] == pt[j] + 1 || pt[i] == pt[j] - 1
					|| pt[i] == pt[j] + 5 || pt[i] == pt[j] - 5)
				stuck = 1;
			j++;
		}
		i++;
	}
	return (stuck);
}

static int	ft_htouch(char *str) //verifie que les # se touchent
{
	int	i;
	int	j;
	int	stuck;
	char	pt[4];

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			pt[j] = i;
			j++;
		}
		i++;
	}
	return (ft_is_stuck(pt));
}

static int	ft_nend(char *str) //verifie que les \n sont bien a la fin des lignes
{
	int i;

	i = 1;
	while (str[i])
	{
		if (i % 5 == 4 && str[i] != '\n')
			return (0);
		i++;
	}
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
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		if (str[i] == '\n')
			ncount++;
		if (str[i] == '#')
			hcount++;
		i++;
	}
	if (ncount != 4 || hcount != 4)
		return (0);
	return (ft_nend(str) && ft_htouch(str));
}
