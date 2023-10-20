/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_argc6.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:31:50 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/20 18:32:26 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

int    ft_sorted_argc6(int argc, int *stack_a)
{
    int *stack_b;
    int middle;

    stack_b = ft_calloc(argc, sizeof(int));
    if (!stack_b)
        return (0);
    middle = ft_middle(stack_a, argc);
    // ft_printf("-----Inici sorted_argc6---------\n");
	// ft_printf("stack_a\n");
	// ft_printints(argc, stack_a);
	// ft_printf("--------------\n");
    // ft_printf("stack_b\n");
    // ft_printints(argc, stack_b);
    // i = 0;
    // ft_printf("middle: %i\n", middle);
    // ft_printf("--------------\n");

    while ((ft_isnotsorted(argc, stack_a) || argc!=6))
    {
        if (stack_a[0] <= middle)
        {
            // ft_printf("stack_a[0]: %i < middle:%i\n", stack_a[0], middle);
            ft_p(stack_a, stack_b, argc, 'b');
            --argc;
        }
        else
        {
            // ft_printf("stack_a[0]: %i >= middle:%i\n", stack_a[0], middle);
            ft_r(argc, stack_a, 'a');
            if (argc == 4)
                break;
            
        }
        if (argc == 4)
        {
            while (ft_isnotsorted(argc, stack_a))
                ft_sorted_argc4(argc, stack_a);
		if (!ft_isnotsorted(2, stack_b))
			ft_s(stack_b, 'b');
        
        argc++;
        ft_p(stack_b, stack_a, argc, 'a');
        argc++;
        ft_p(stack_b, stack_a, argc, 'a');
        }
    }
    // ft_printf("-----FI sorted_argc6---------\n");
	// ft_printf("stack_a\n");
	// ft_printints(argc, stack_a);
	// ft_printf("--------------\n");
    // ft_printf("stack_b\n");
    // ft_printints(argc, stack_b);
    // ft_printf("--------------\n");
    free(stack_b);
    return (1);
}