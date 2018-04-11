/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_special.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 08:37:55 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 09:23:01 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_spec		ft_special_c(char *str, t_flag flag)
{
	int		i;
	t_spec	spec;

	spec.len = 1;
	i = 0;
	flag = ft_flag_adjust(flag);
	if (flag.width > spec.len)
	{
		spec.tab = malloc(sizeof(char) * flag.width + 1);
		spec.tab[flag.width] = '\0';
		while (i < flag.width && flag.zero == 0)
			spec.tab[i] = ft_fill(spec.tab, &i, ' ');
		while (i < flag.width && flag.zero == 1)
			spec.tab[i] = ft_fill(spec.tab, &i, '0');
		if (flag.minus == 0)
			spec.tab[flag.width - 1] = str[0];
		else
			spec.tab[0] = str[0];
		spec.len = flag.width;
	}
	else
		spec.tab = str;
	return (spec);
}
