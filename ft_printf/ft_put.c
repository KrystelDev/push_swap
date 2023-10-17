/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krodcas <krodcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:09:46 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/13 18:01:29 by krodcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printc(int c, int j)
{
	j++;
	if (write(1, &c, 1) == -1)
		return (-1);
	return (j);
}

int ft_prints(char *str, int j)
{
	if (!str)
		str = "(null)";
	while (*str && j != -1)
		j = ft_printc(*str++, j);
	return (j);
}

int ft_printi(int n, int j)
{
	char *itoa;

	itoa = ft_itoap((long)n);
	if (!itoa)
		return (-1);
	j = ft_prints(itoa, j);
	free(itoa);
	return (j);
}

int ft_printu(int n, int j)
{
	char *itoa;
	unsigned int nb;

	nb = n;
	if (n < 0)
	{
		nb = (n + 1) + 4294967295;
	}
	itoa = ft_itoap((long)nb);
	if (!itoa)
		return (-1);
	j = ft_prints(itoa, j);
	free(itoa);
	return (j);
}
