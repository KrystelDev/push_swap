/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:26:27 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/23 17:17:28 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"

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


int main(int argc, char **argv)
{
	int *stack_a;

	if (argc <= 1)
		return (0);

	if (!ft_all_isdigit(argc, argv) || ft_iscpy(argc, argv) || ft_all_isint(argc, argv))
		return (ft_printf("Error\n"), 0);

	stack_a = ft_conversorint(argc, argv);

	if (!stack_a)
		return (0);

	if (argc == 3 && ft_isnotsorted(argc, stack_a))
			ft_s(stack_a, 'a');

	if (argc == 4 && ft_isnotsorted(argc, stack_a))
			ft_sorted_argc4(argc, stack_a);
	
	if (argc == 5 && ft_isnotsorted(argc, stack_a))
	{
		if (!ft_sorted_argc5(argc, stack_a))
			return(0);
	}
	if (argc == 6 && ft_isnotsorted(argc, stack_a))
	{
		if (!ft_sorted_argc6(argc, stack_a))
			return(0);
	}
	// if (argc > 6 && ft_isnotsorted(argc, stack_a))
	// {
	// 	if (!ft_sorted_argc7(argc, stack_a))
	// 		return(0);
	// }
	// if (argc > 4)
	// {
	// 	stack_b = ft_calloc(argc, sizeof(int));
	// 	if (!stack_b)
	// 		return (0);
	// 	middle = ft_middle(stack_a, argc);
	// 	// while (ft_isnotsorted(argc, stack_a))
	// 	// {
	// 		i = 0;
	// 		while ( i  < (argc - 1))
	// 		{
	// 			ft_printf("stack_a[0]: %i > %i\n", stack_a[0], middle);
	// 			if (stack_a[0] < middle)
	// 			{
	// 				ft_p(stack_a, stack_b, argc, 'b');
	// 				ft_printf("-------PA---------\n");
	// 				ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[0]);
	// 				ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[1]);
	// 				ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[2]);
	// 				ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[3]);
	// 				ft_printf("----------------\n");
	// 				--argc;
	// 			}
	// 			else
	// 			{
	// 				ft_r(argc, stack_a, 'a');
	// 				ft_printf("-------RA---------\n");
	// 				ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[0]);
	// 				ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[1]);
	// 				ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[2]);
	// 				ft_printf("Final -> stack_a[0 - 1]: %i\n", stack_a[3]);
	// 				ft_printf("----------------\n");
	// 				i++;
	// 			}
				
	// 		}
	// }

	// ft_printf("stack_a\n");
	// ft_printints(argc, stack_a);
	// ft_printf("--------------\n");
	free(stack_a);


	
	return (0);
}