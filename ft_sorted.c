/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:21:40 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/17 19:31:02 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int* ft_sorted(int *list_num, int argc)
{
    int *list_sorted;
    int size_list;

    list_sorted = ft_calloc(argc, sizeof(int));
    size_list = argc - 1;
    if (!list_sorted)
        return NULL;

    // Copiar el contenido de list_num a list_ordenada
    int i = 0;
    while (i < size_list) {
        list_sorted[i] = list_num[i];
        i++;
    }

    // Algoritmo de Bubble Sort
    int change = 1;
    while (change)
    {
        change = 0;
        int j = 0;
        while (j < size_list - 1)
        {
            if (list_sorted[j] > list_sorted[j + 1])
            {
                int temp = list_sorted[j];
                list_sorted[j] = list_sorted[j + 1];
                list_sorted[j + 1] = temp;
                change = 1;
            }
            j++;
        }
    }
   
return list_sorted;
}