/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:43:55 by krodcas           #+#    #+#             */
/*   Updated: 2023/10/30 11:46:11 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void ft_rr(int argc, int *stack, char c)
{
    size_t size;
    int temp;
    size_t i;

    size = argc - 1;
    temp = stack[size - 1];
    i = size - 1;
    while (i > 0)
    {
        stack[i] = stack[i - 1];
        i--;
    }
    stack[0] = temp;

    ft_printf("rr%c\n", c);
}