/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversorint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krodcas <krodcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:38:27 by krodcas           #+#    #+#             */
/*   Updated: 2023/10/13 20:44:51 by krodcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int *ft_conversorint(int argc, char **argv)
{
    int *stack;

    stack = ft_calloc(argc, sizeof(int));
    if (!stack)
        return (NULL);

    int i = 1;
    while (i < argc)
    {
        stack[i - 1] = ft_atoi(argv[i]); // Convertir y guardar el int en el array
        i++;
    }

    return (stack);
}