/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nowipr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 08:39:18 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 09:23:56 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_nowipr_next_2(char **str, t_flag flag, int *i)
{
	char	*tab;
	int		j;

	j = 1;
	if (!(tab = malloc(sizeof(char) * flag.preci + 2)))
		return (NULL);
	tab[*i] = '-';
	tab[flag.preci + 1] = '\0';
	*str[0] = '0';
	*i = *i + j;
	return (tab);
}

char	*ft_nowipr_next_3(char *str, char *tab)
{
	tab = ft_strcat(tab, str);
	free(str);
	return (tab);
}

char	*ft_nowipr_next(char *str, t_flag flag, int len)
{
	int		i;
	char	*tab;

	i = 0;
	if (str[0] == '-')
		len--;
	if (flag.preci <= len)
		return (ft_nowinopr(str, flag, len));
	else
	{
		if (str[0] == '-')
			tab = ft_nowipr_next_2(&str, flag, &i);
		else
		{
			if (!(tab = malloc(sizeof(char) * flag.preci + 1)))
				return (NULL);
			tab[flag.preci] = '\0';
		}
		while (i < (flag.preci - len))
			tab[i] = ft_fill(tab, &i, '0');
		while (i < flag.preci)
			tab[i] = ft_fill(tab, &i, '\0');
		tab = ft_nowipr_next_3(str, tab);
		return (ft_nowinopr(tab, flag, ft_strlen(tab)));
	}
}

char	*ft_nowipr_prev(t_flag flag, char *str)
{
	char	*tab;

	if (flag.conv_num == 15)
		tab = ft_strndups((unsigned char*)str, flag.preci);
	else
		tab = ft_strndup(str, flag.preci);
	free(str);
	return (ft_nowinopr(tab, flag, flag.preci));
}

char	*ft_nowipr(char *str, t_flag flag, int len)
{
	char	*tab;
	int		i;

	i = 0;
	if (flag.conv_num == 7 || flag.conv_num == 15)
	{
		if (flag.preci >= len)
			return (ft_nowinopr(str, flag, len));
		else
			return (ft_nowipr_prev(flag, str));
	}
	else if (len == 1 && str[0] == '0' && flag.preci == 0)
	{
		tab = ft_add_preci_empty();
		free(str);
		return (ft_nowinopr(tab, flag, 0));
	}
	else
		return (ft_nowipr_next(str, flag, len));
}
