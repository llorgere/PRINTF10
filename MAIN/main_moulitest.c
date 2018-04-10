#include "../libftprintf.h"
#include <stdio.h>
int		main(void)
{
	char	c;
	int		ft_p;
	int		p;

	ft_p = 0;
	p = 0;
	//char*test;
	char* l = setlocale(LC_ALL, "");

	if (l	== NULL)
		printf("Locale not set\n");
	else
		printf("Locale set to %s\n", l);
	p = printf("% .5p|%+p\n", 42, 42);
	ft_p = ft_printf("% p|%+p\n", 42, 42);
	printf("ft_p est [%d] et p est [%d]\n", ft_p, p);
	return (0);
}
