#include "libftprintf.h"

static char		*ft_normal(flag_type flag)
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
		tab[i] = ' ';
		i++;
	}
	tmp = ft_strjoin(tab, flag.tab);
	free(flag.tab);
	free(tab);
	return (tmp);
}

static char		*ft_minus(flag_type flag)
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

char *ft_error_flag(flag_type flag)
{
	int		i;
	
	i = 0;
	if (flag.width <= 0)
		return (ft_minus(flag));
	else
		return (ft_normal(flag));
}
