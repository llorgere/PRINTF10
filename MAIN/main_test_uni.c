#include "../libftprintf.h"

int		main(void)
{
	char	*test;
	char* l = setlocale(LC_ALL, ""); 

	if (l == NULL) 
		printf("Locale not set\n"); 
	else
		printf("Locale set to %s\n", l); 
	ft_putnbr(printf("%lc", 20000));
	ft_putnbr(printf("%lc", 129));
	ft_putnbr(printf("%lc", 257));
	ft_putnbr(printf("%lc", 513));
	ft_putnbr(printf("%lc", 1025));
	ft_putnbr(printf("%lc", 2049));
	ft_putnbr(printf("%lc", 4097));
	ft_putnbr(printf("%lc", 8193));
//	ft_putstr("\n");
//	ft_putnbr(ft_printf("%lc", 945));
//	ft_putstr("\n");
	//test = ft_uitoa_bin(20000);
	//ft_putstr("\n");
	//ft_putstr(test);
	//ft_putstr("\n");
	//free(test);
	//ft_putstr(ft_uniconv(ft_uitoa_bin(532)));
	ft_putstr(ft_uniconv(ft_uitoa_bin(20000)));
	ft_putstr(ft_uniconv(ft_uitoa_bin(129)));
	ft_putstr(ft_uniconv(ft_uitoa_bin(257)));
	ft_putstr(ft_uniconv(ft_uitoa_bin(513)));
	ft_putstr(ft_uniconv(ft_uitoa_bin(1025)));
	ft_putstr(ft_uniconv(ft_uitoa_bin(2049)));
	ft_putstr(ft_uniconv(ft_uitoa_bin(4097)));
	ft_putstr(ft_uniconv(ft_uitoa_bin(8193)));
	return (0);
}
