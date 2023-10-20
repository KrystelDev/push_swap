/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnotsorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:40:49 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/20 13:46:08 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isnotsorted(int argc, int *stack_a)
{
	int i;

	i = 0;
	// argc - 2  pk argc cuenta el nombre del ejectuable y la cantidad (nosotros miramos posición de stack_a)
	while (i < (argc - 2))
	{
		if (stack_a[i] > stack_a[i + 1])
			return (1);
		i++;
	}
	return (0);
}