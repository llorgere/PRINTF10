/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_sixth.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 06:38:53 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 06:38:58 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_int2	ft_arg_sixth(t_int2 a, char *tab)
{
	if ((a.count == a.tmp) && (tab[a.i] == '+' || tab[a.i] == ' ' ||
		tab[a.i] == '#' || tab[a.i] == '-' || tab[a.i] == '0' ||
		tab[a.i] == '.' || (tab[a.i] >= '0' && tab[a.i] <= '9') ||
		tab[a.i] == 'j' || tab[a.i] == 'h' || tab[a.i] == 'l' ||
		tab[a.i] == 'z'))
	{
		a.count++;
		a.i++;
	}
	return (a);
}
