/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_fourth.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 06:35:39 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 06:35:43 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_flag	ft_arg_fourth(t_flag flag, t_int2 *a, char *tab)
{
	char	*tabpw;

	tabpw = NULL;
	if ((a->count == a->tmp) && tab[a->i] > '0' && tab[a->i] <= '9' &&
			flag.width < 0 && flag.preci < 0)
	{
		a->count++;
		a->tmp = a->i;
		while (tab[a->i] >= '0' && tab[a->i] <= '9')
			a->i++;
		tabpw = ft_strndup(tab + a->tmp, a->i - a->tmp + 1);
		flag.width = ft_atoi(tabpw);
		free(tabpw);
		a->tmp = a->count--;
	}
	return (flag);
}
