/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_argc7.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:31:50 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/30 18:06:38 by kryrodri         ###   ########.fr       */
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
	
	while (size > 1)
    {
		// ft_printf("index %i\n", (ft_index(stack_sorted, stack_a[0], argc)));
		// ft_printf("size: %i\n", size);
		// ft_printf("rank: %i\n", rank);
		// ft_printf("stack_a[0]: %i\n", stack_a[0]);
		if (ft_index(stack_sorted, stack_a[0], argc) <= rank)
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
		{
			if (stack_a[size-1] <= rank)
			{
				// ft_printf("stack_a[size-2]: %i\n", stack_a[size-1]);
				ft_rr(size, stack_a, 'a');
				// ft_printf("-----RRA 7+---------\n");

				// ft_printf("stack_a\n");
				// ft_printints(argc, stack_a);
				// ft_printf("stack_b\n");
				// ft_printints(argc, stack_b);
				// ft_printf("--------------\n");
			}
			else
			{
				ft_r(size, stack_a, 'a');
				// ft_printf("-----RA 7+---------\n");
				// ft_printf("stack_a\n");
				// ft_printints(argc, stack_a);
				// ft_printf("stack_b\n");
				// ft_printints(argc, stack_b);
				// ft_printf("--------------\n");
			}

		}

	   	if (size == (argc - rank))
			rank = rank + chunks;
    }
	// ft_printf("stack_a\n");
	// ft_printints(size, stack_a);

	while ((size) != argc)
	{
		if (ft_index(stack_sorted, stack_b[0], argc) == (argc - size - 1))
		{
			ft_p(stack_b, stack_a, argc, 'a');
			++size;
		}
		else
		{
			// ft_printf("--------------\n");
			// ft_printf("argc - size: %i\n", argc - size);
			// ft_printf("argc - size - 2: %i\n", argc - size - 2);
			// ft_printf("ft_index(stack_sorted, stack_b[argc - size - 2], argc): %i\n", ft_index(stack_sorted, stack_b[argc - size - 2], argc));
			// ft_printf("stack_b[argc - size - 2]: %i\n", stack_b[argc - size - 2]);
			// ft_printf("stack_b\n");
			// ft_printints(argc - size, stack_b);
			// ft_printf("stack_a\n");
			// ft_printints(size, stack_a);
			if(ft_index(stack_sorted, stack_b[argc - size - 2], argc) == (argc - size))
			{
				ft_rr((argc - size + 1), stack_b, 'b');
				// ft_printf("-----RRB 7+---------\n");
				// ft_printf("stack_b\n");
				// ft_printints(argc, stack_b);
				// ft_printf("stack_a\n");
				// ft_printints(size, stack_a);
				// ft_printf("--------------\n");
			}
			else
			{
				ft_r((argc - size + 1), stack_b, 'b');
				// ft_printf("-----RB 7+---------\n");
				// ft_printf("stack_a\n");
				// ft_printints(argc, stack_a);
				// ft_printf("stack_b\n");
				// ft_printints(argc, stack_b);
				// ft_printf("--------------\n");
			}
			// ft_printf("--------------\n");
		}
		// ft_printf("-----PB 7+---------\n");
		// ft_printf("stack_a\n");
		// ft_printints(argc, stack_a);
		// ft_printf("stack_b\n");
		// ft_printints(argc, stack_b);
		// ft_printf("--------------\n");
		if (size == argc && !ft_isnotsorted(argc, stack_a))
			free(stack_sorted);
	}
	
	// ft_printf("-----FI sorted_argc7---------\n");
	// ft_printf("stack_a\n");
	// ft_printints(argc, stack_a);
    // ft_printf("stack_b\n");
    // ft_printints(argc, stack_b);
    // ft_printf("--------------\n");
    free(stack_b);
    return (1);
}