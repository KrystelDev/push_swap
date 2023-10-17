/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krodcas <krodcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:30:20 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/13 22:46:30 by krodcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int ft_iscpy(int argc, char **argv)
{
    int i;
    int j;
    size_t size;

    i = 1; // No vuy que miri el [0]
    while (i < argc)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strlen(argv[i]) > ft_strlen(argv[j]))
                size = ft_strlen(argv[i]);
            else
                size = ft_strlen(argv[j]);
            if (ft_strncmp(argv[i], argv[j], size) == 0)
                return 1; // Si hi ha coencidencia
            j++;
        }
        i++;
    }
    return 0; // No hi ha coencidencia
}