/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_argc7.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:31:50 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/25 19:42:20 by kryrodri         ###   ########.fr       */
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
    ft_printf("-----Inici sorted_argc7---------\n");
	ft_printf("stack_a\n");
	ft_printints(argc, stack_a);
	ft_printf("--------------\n");
    ft_printf("stack_b\n");
    ft_printints(argc, stack_b);
    size = argc;
	chunks = (size - 1) / chunks;
	rank = chunks;
    // while ((size != argc || ft_isnotsorted(argc, stack_a)))
	while (size != 0)
    {
       stack_sorted = ft_sorted(stack_a, argc);
	   if (ft_index(stack_sorted, stack_a[0]) <= rank)
	   {
			ft_p(stack_a, stack_b, size, 'b');
			--size;
	   }
	   else
			ft_r(argc, stack_a, 'a');
	   if (size == (argc - chunks - 1 ))
			rank = rank + chunks;
	   
       if (size == argc && !ft_isnotsorted(argc, stack_a))
			free(stack_sorted);
    }
    ft_printf("-----FI sorted_argc7---------\n");
	ft_printf("stack_a\n");
	ft_printints(argc, stack_a);
	ft_printf("--------------\n");
    ft_printf("stack_b\n");
    ft_printints(argc, stack_b);
    ft_printf("--------------\n");
    free(stack_b);
    return (1);
}