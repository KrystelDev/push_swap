/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_isdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:30:20 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/12 22:04:05 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	ft_all_isdigit(int argc, char **argv)
{
    size_t i;
    size_t j;
    
    i = 1;
    while ((int)i < argc)
    {
        j = 0;
        while (ft_strlen(argv[i]) > j)
        {
            if (!ft_isdigit((int)argv[i][j]))
            {
                if (j == 0 && argv[i][j] == '-')
                    break;
                return (0);
            }
            j++;
        }
        i++;
    }
    return(1);
}