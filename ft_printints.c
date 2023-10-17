/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printints.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krodcas <krodcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:43:16 by krodcas           #+#    #+#             */
/*   Updated: 2023/10/13 18:07:31 by krodcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

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