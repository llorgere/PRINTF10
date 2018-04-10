#include "libftprintf.h"

static char		*ft_minus(t_flag flag)
{
	char	*tab;
	char	*tmp;
	int		i;

	i = 0; 
	if(!(tab = malloc(sizeof(char) * (flag.width + ft_strlen(flag.tab)))))
		return (NULL);
	tab[flag.width] = '\0';
	while (i < flag.width - 1)
	{
		if(flag.zero == 1)
			tab[i] = '0';
		else
			tab[i] = ' ';
		i++;
	}
	tab[i] = flag.c;
	tmp = ft_strjoin(tab, flag.tab);
	free(flag.tab);
	free(tab);
	//printf("tmp est [%s]\n", tmp);
	return (tmp);
}

static char		*ft_nominus(t_flag flag)
{
	char	*tab;
	char	*tmp;
	int		i;

	i = 1; 
	if(!(tab = malloc(sizeof(char) * (flag.width + ft_strlen(flag.tab)))))
		return (NULL);
	tab[flag.width] = '\0';
	tab[0] = flag.c;
	while (i < flag.width)
	{
		if(flag.zero == 1)
			tab[i] = '0';
		else
			tab[i] = ' ';
		i++;
	}
	tmp = ft_strjoin(tab, flag.tab);
	free(flag.tab);
	free(tab);
	return (tmp);
}

static char		*ft_normal(t_flag flag)
{
	char	*tab;
	char	*tmp;

	if(!(tab = malloc(sizeof(char) * (2))))
		return (NULL);
	tab[0] = flag.c;
	tab[1] = '\0';
	tmp = ft_strjoin(tab, flag.tab);
	free(flag.tab);
	free(tab);
	return (tmp);
}

char *ft_error_flag(t_flag flag)
{
	int		i;
	
	//printf("flag.tab est [%s]et flag.c est {%c}", flag.tab, flag.c);
	i = 0;
	if (flag.width <= 0)
		return (ft_normal(flag));
	else if (flag.minus == 0)
		return (ft_minus(flag));
	else
		return (ft_nominus(flag));
}
