/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krodcas <krodcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:33:20 by krodcas           #+#    #+#             */
/*   Updated: 2023/10/17 12:40:03 by krodcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void ft_r(int argc, int *stack, char c)
{
    size_t size;
    int temp;
    size_t i;

    size = argc - 1;
    temp = stack[0];
    i = 0;
    while (i < size - 1)
    {
        stack[i] = stack[i + 1];
        i++;
    }
    stack[size - 1] = temp;

    ft_printf("r%c\n", c);
}