/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krodcas <krodcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:57:42 by krodcas           #+#    #+#             */
/*   Updated: 2023/10/17 12:35:47 by krodcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void ft_s(int *stack, char c)
{
    int temp = stack[0];
    stack[0] = stack[1];
    stack[1] = temp;
    ft_printf("s%c\n", c);
}
