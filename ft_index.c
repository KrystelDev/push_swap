/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:48:52 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/26 11:59:58 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_index(int *list, int valor, int argc)
{
	int size;
	int i;

	size = argc - 2;
	i = 0;
	while (i <= size)
	{
		if (list[i] == valor)
			return (i);
		i++;
	}
	return (-1);
}