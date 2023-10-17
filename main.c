/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krodcas <krodcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:26:27 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/17 14:29:45 by krodcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

int ft_isnotsorted(int argc, int *stack_a)
{
	int i;

	i = 0;
	// argc - 2  pk argc cuenta el nombre del ejectuable y la cantidad (nosotros miramos posición de stack_a)
	while (i < (argc - 2))
	{
		if (stack_a[i] > stack_a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int *stack_a;

	if (argc <= 1)
		return (0);

	if (!ft_all_isdigit(argc, argv) || ft_iscpy(argc, argv) || ft_all_isint(argc, argv))
		return (ft_printf("Error\n"), 0);

	stack_a = ft_conversorint(argc, argv);

	if (!stack_a)
		return (0);

	if (argc == 3)
	{
		if (ft_isnotsorted(argc, stack_a))
			ft_s(stack_a, 'a');
	}

	if (argc == 4)
	{
		while (ft_isnotsorted(argc, stack_a))
		{
			if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] && stack_a[0] > stack_a[2])
			{
				// 3, 1, 2 -> 1, 2, 3
				ft_r(argc, stack_a, 'a');
			}
			if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] && stack_a[0] < stack_a[2])
			{
				// 2, 1, 3 -> 1, 2, 3
				ft_s(stack_a, 'a');
			}
			if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] && stack_a[0] > stack_a[2])
			{
				// 2, 3, 1 -> 3, 2, 1
				ft_s(stack_a, 'a');
			}
			if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] && stack_a[0] < stack_a[2])
			{
				// 1, 3, 2 -> 3, 2, 1
				ft_r(argc, stack_a, 'a');
			}
			if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2] && stack_a[0] > stack_a[2])
			{
				// 3, 2, 1 -> 2, 1, 3
				ft_r(argc, stack_a, 'a');
			}
		}
	}

	// if (argc == 5)
	// {
	// 	// 1 2 3 4
	// 	while (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2] && stack_a[2] > stack_a[3])
	// 	{
	// 		/* code */
	// 	}

	// 1 2 4 3
	// 		pb pb sa pa pa

	// 1 3 2 4
	// 		pb ra pb sa pa pa

	// 1 3 4 2
	// 		pb ra ra pa

	// 1 4 2 3
	// 		pb ra pa

	// 1 4 3 2
	// 		pb ra ra ra pa

	// 2 1 3 4
	// 2 1 4 3
	// 2 3 1 4
	// 2 3 4 1
	// 2 4 1 3
	// 2 4 3 1
	// 3 1 2 4
	// 3 1 4 2
	// 3 2 1 4
	// 3 2 4 1
	// 3 4 1 2
	// 3 4 2 1
	// 4 1 2 3
	// 4 1 3 2
	// 4 2 1 3
	// 4 2 3 1
	// 4 3 1 2
	// 4 3 2 1
	// }

	// if (argc == 6)
	// {
	// 	// Paso 1: Enviar los dos números superiores de A a B
	// 	ft_pb(stack_a_a, stack_a_b);
	// 	ft_pb(stack_a_a, stack_a_b);

	// 	// Paso 2-3: Aplicar la lógica de 3 números aleatorios para ordenar A
	// 	// Utiliza tu lógica actual aquí para ordenar los elementos de A.

	// 	// Paso 4-6: Asegurarse de que A pueda aceptar correctamente los números de B
	// 	while (!ft_isempty(stack_a_b))
	// 	{
	// 		if (stack_a_b[0] > stack_a_a[0] && stack_a_b[0] < stack_a_a[1])
	// 			ft_pa(stack_a_a, stack_a_b);
	// 		else
	// 			ft_ra(stack_a_a); // Puede ser necesario ajustar esto dependiendo de tu implementación de rotación
	// 	}
	// }

	// ft_printints(argc, stack_a);
	free(stack_a);

	return (0);
}