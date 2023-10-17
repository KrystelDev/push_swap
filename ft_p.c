/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krodcas <krodcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:37:28 by krodcas           #+#    #+#             */
/*   Updated: 2023/10/17 14:16:48 by krodcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void ft_p(int *stack_a, int *stack_b, int argc, char c)
{
    // Obtener el valor del primer elemento de stack_a
    int value_to_push = stack_a[0];

    // Desplazar los elementos de stack_b del del penultimo al ultimo, ... , del 0 al 1...
    int i = argc - 3;
    while (i >= 0)
    {
        stack_b[i + 1] = stack_b[i];
        stack_b[i] = '\0';
        i--;
    }

    // Colocar el valor en el primer lugar de stack_b
    stack_b[0] = value_to_push;

    // Desplazar los elementos de stack_a del 1 al 0, del 2 al 1, ...,  del ultimo al penultimo.
    i = 1;
    while (i <= argc - 2)
    {
        stack_a[i - 1] = stack_a[i];
        stack_a[i] = '\0';
        i++;
    }
    ft_printf("p%c\n", c);
}

// inicio
// stack_a = 1 2 3
// stack_b = '\0' '\0' '\0'

// pb
// stack_ a = 2 3 '\0'
// stack_b =  1 '\0' '\0'

// pb
// stack_ a = 3 '\0' '\0'
// stack_b = 2 1 '\0'

// pb
// stack_ a = '\0' '\0' '\0'
// stack_b = 3 2 1

// void ft_printints(int argc, int *stack)
// {
//     int i;

//     i = 0;
//     while (i < (argc - 1))
//     {
//         ft_printf("%d\n", stack[i]);
//         i++;
//     }
// }

// int main(void)
// {
//     int stack_a[3] = {1, 0, 3};
//     int stack_b[3] = {'\0', '\0', '\0'};

//     ft_printf("stack_a\n");
//     ft_printints(4, stack_a);
//     ft_printf("\nstack_b\n");
//     ft_printints(4, stack_b);
//     ft_printf("\n");
//     ft_printf("--------------\n");

//     ft_p(stack_a, stack_b, 4, 'b');
//     ft_p(stack_a, stack_b, 4, 'b');
//     ft_p(stack_a, stack_b, 4, 'b');

//     ft_printf("--------------\n");
//     ft_printf("stack_a\n");
//     ft_printints(4, stack_a);
//     ft_printf("\nstack_b\n");
//     ft_printints(4, stack_b);
//     ft_printf("\n");
// }