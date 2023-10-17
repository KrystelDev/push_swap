/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_isint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krodcas <krodcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:36:06 by krodcas           #+#    #+#             */
/*   Updated: 2023/10/13 13:50:59 by krodcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int ft_all_isint(int argc, char **argv)
{
	long int max_int;
	long int min_int;
	int i;
	long int num;

	max_int = INT_MAX;
	min_int = INT_MIN;
	i = 1;
	while (i < argc)
	{
		num = ft_atol(argv[i]);
		if (num > max_int || num < min_int)
			return 1; // Sí hay un número mayor o menor a un int
		i++;
	}
	return 0; // No hay un número mayor o menor a un int
}
