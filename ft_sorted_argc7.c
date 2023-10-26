/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_argc7.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:31:50 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/26 20:24:53 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

int    ft_sorted_argc7(int argc, int *stack_a, int chunks)
{
    int *stack_b;
    int *stack_sorted;
    int size;
	int rank;
	int borrar;

    stack_b = ft_calloc(argc, sizeof(int));
    if (!stack_b)
		return (0);
    // ft_printf("-----Inici sorted_argc7---------\n");
	// ft_printf("stack_a\n");
	// ft_printints(argc, stack_a);
    // ft_printf("stack_b\n");
    // ft_printints(argc, stack_b);
	// ft_printf("--------------\n");
    size = argc;
	chunks = (size - 1) / chunks;
	rank = chunks;
	stack_sorted = ft_sorted(stack_a, argc);
	// ft_printf("stack_sorted\n");
	// ft_printints(argc, stack_sorted);

	if (!ft_isnotsorted(argc, stack_a))
		return (0);
	
	while (size > 2)
    {
		// ft_printf("index %i\n", (ft_index(stack_sorted, stack_a[0], argc)));
		// ft_printf("size: %i\n", size);
		// ft_printf("rank: %i\n", rank);
		// ft_printf("stack_a[0]: %i\n", stack_a[0]);
		if (ft_index(stack_sorted, stack_a[0], argc) < rank)
		{
			ft_p(stack_a, stack_b, argc, 'b');
			--size;
			// ft_printf("-----PB 7+---------\n");
			// ft_printf("stack_a\n");
			// ft_printints(argc, stack_a);
			// ft_printf("--------------\n");
			// ft_printf("stack_b\n");
			// ft_printints(argc, stack_b);
			// ft_printf("--------------\n");
		}
		else
			ft_r(size, stack_a, 'a');
		borrar = argc - rank;
	   if (size == borrar)
			rank = rank + chunks;
    }

	while ((size) != argc)
	{
		if (ft_index(stack_sorted, stack_b[0], argc) == (argc - size - 1))
		{
			ft_p(stack_b, stack_a, argc, 'a');
			++size;
			// ft_printf("-----PB 7+---------\n");
			// ft_printf("stack_a\n");
			// ft_printints(argc, stack_a);
			// ft_printf("--------------\n");
			// ft_printf("stack_b\n");
			// ft_printints(argc, stack_b);
			// ft_printf("--------------\n");
		}
		else
		{
			ft_r((argc - size + 1), stack_b, 'b');
		}
		// ft_printf("-----PB 7+---------\n");
		// ft_printf("stack_a\n");
		// ft_printints(argc, stack_a);
		// ft_printf("--------------\n");
		// ft_printf("stack_b\n");
		// ft_printints(argc, stack_b);
		// ft_printf("--------------\n");
		if (size == argc && !ft_isnotsorted(argc, stack_a))
			free(stack_sorted);
	}
	
    // ft_printf("-----FI sorted_argc7---------\n");
	// ft_printf("stack_a\n");
	// ft_printints(argc, stack_a);
	// ft_printf("--------------\n");
    // ft_printf("stack_b\n");
    // ft_printints(argc, stack_b);
    // ft_printf("--------------\n");
    free(stack_b);
    return (1);
}