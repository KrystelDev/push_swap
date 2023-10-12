/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:26:27 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/12 21:55:06 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	
    // Control de errores
    // errores son: 
        // argumentos que no son enteros, 
        // argumentos superiores a un número entero, 
        // y/o encontrar números duplicados.

        // si uno de estos se cumple:
        // ft_printf("Error\n")
    if (!ft_all_isdigit(argc, argv))
        ft_printf("Error\n");
    
    // treballar

    return(0);
}