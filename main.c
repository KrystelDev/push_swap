/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:26:27 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/18 19:31:48 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"

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
void ft_printints(int argc, int *stack)
{
    int i;

    i = 0;
    while (i < (argc - 1))
    {
        ft_printf("%d\n", stack[i]);
        i++;
    }
}


int main(int argc, char **argv)
{
	int *stack_a;
	int *stack_b = NULL;
	int middle;
	int i;

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


	// 1 2 4 3
	// 1 3 2 4
	// 1 3 4 2
	// 1 4 2 3
	// 1 4 3 2
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
	ft_printf("argc: %i\n", argc);
	if (argc > 4)
	{
		stack_b = ft_calloc(argc, sizeof(int));
		if (!stack_b)
			return (0);
		middle = ft_middle(stack_a, argc);
		// while (ft_isnotsorted(argc, stack_a))
		// {
			i = 0;
			while ( i  < (argc - 1))
			{
				ft_printf("stack_a[0]: %i > %i\n", stack_a[0], middle);
				if (stack_a[0] < middle)
				{
					ft_p(stack_a, stack_b, argc, 'b');
					ft_printf("-------PA---------\n");
					ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[0]);
					ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[1]);
					ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[2]);
					ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[3]);
					ft_printf("----------------\n");
					--argc;
				}
				else
				{
					ft_r(argc, stack_a, 'a');
					ft_printf("-------RA---------\n");
					ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[0]);
					ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[1]);
					ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[2]);
					ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[3]);
					ft_printf("----------------\n");
					i++;
				}
				
			}
	}
	ft_printf("stack_a\n");
	ft_printints(argc, stack_a);
	ft_printf("--------------\n");
	free(stack_a);

	if (stack_b)
	{
		ft_printf("stack_b\n");
		ft_printints(argc, stack_b);
		ft_printf("--------------\n");
		free(stack_b);
	}
	
	return (0);
}