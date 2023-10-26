/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_argc4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:41:07 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/26 20:24:50 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorted_argc4(int argc, int *stack_a)
{
	while (ft_isnotsorted(argc, stack_a))
	{
		if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] && stack_a[0] > stack_a[2])
		{
			// 3, 1, 2 -> 1, 2, 3
			ft_r(argc, stack_a, 'a');
		}
		if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] && stack_a[0] < stack_a[2])
		{
			// 2, 1, 3 -> 1, 2, 3
			ft_s(stack_a, 'a');
		}
		if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] && stack_a[0] > stack_a[2])
		{
			// 2, 3, 1 -> 3, 2, 1
			ft_s(stack_a, 'a');
		}
		if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] && stack_a[0] < stack_a[2])
		{
			// 1, 3, 2 -> 3, 2, 1
			ft_r(argc, stack_a, 'a');
		}
		if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2] && stack_a[0] > stack_a[2])
		{
			// 3, 2, 1 -> 2, 1, 3
			ft_r(argc, stack_a, 'a');
		}
	}
}