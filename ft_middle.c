/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_middle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:21:40 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/18 17:50:32 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "push_swap.h"
 #include "libft/libft.h"
 #include "ft_printf/ft_printf.h"

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
   
return (list_sorted);
}
int ft_middle(int *list_num, int argc)
{
    int i;
    int *list_sorted;
    int result;

    i = ((argc - 1)/2)-1;
    list_sorted = ft_sorted(list_num, argc);
    result = list_sorted[i];
    free (list_sorted);

    return(result);
}
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

// int main (int argc, char **argv)
// {
//     int *stack_a;
//     int middle;

// 	stack_a = ft_conversorint(argc, argv);
//     ft_printf("stack_a\n");
//     ft_printints(argc, stack_a);
//     ft_printf("--------------\n");
//     middle = ft_middle(stack_a, argc);
//     ft_printf("--------------\n");
//     ft_printf("middle: %i\n", middle);
// 	free(stack_a);
//     return (0);
// }