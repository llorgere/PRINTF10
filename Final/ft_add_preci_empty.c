/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_preci_empty.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 09:07:50 by llorgere          #+#    #+#             */
/*   Updated: 2018/04/11 09:07:52 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_add_preci_empty(void)
{
	char	*tab;

	if (!(tab = malloc(sizeof(char) * 1)))
		return (NULL);
	tab[0] = '\0';
	return (tab);
}
