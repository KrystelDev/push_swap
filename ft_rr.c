/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krodcas <krodcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:43:55 by krodcas           #+#    #+#             */
/*   Updated: 2023/10/13 23:55:18 by krodcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void ft_rr(int *stack)
{
    size_t size;
    int temp;
    size_t i;

    size = 0;
    while (stack[size])
        size++;

    temp = stack[size - 1];
    i = size - 1;
    while (i > 0)
    {
        stack[i] = stack[i - 1];
        i--;
    }
    stack[0] = temp;

    ft_printf("rra\n");
}