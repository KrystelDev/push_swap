/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:26:27 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/26 20:12:40 by kryrodri         ###   ########.fr       */
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
		ft_sorted_argc5(argc, stack_a);

	if (argc == 6 && ft_isnotsorted(argc, stack_a))
		ft_sorted_argc6(argc, stack_a);

	if (argc > 6 && ft_isnotsorted(argc, stack_a))
		ft_sorted_argc7(argc, stack_a, 4);

	free(stack_a);
	return (0);
}