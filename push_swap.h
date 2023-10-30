/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:07:30 by kryrodri          #+#    #+#             */
/*   Updated: 2023/10/30 11:27:56 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h> // malloc y free
#include <limits.h> // INT_MAX

int		ft_all_isdigit(int argc, char **argv);
int		ft_iscpy(int argc, char **argv);
int		ft_all_isint(int argc, char **argv);
int		ft_isnotsorted(int argc, int *stack_a);
int		*ft_conversorint(int argc, char **argv);
void	ft_rr(int argc, int *stack, char c);
void	ft_r(int argc, int *stack, char c);
void	ft_s(int *stack, char c);
void	ft_p(int *stack_a, int *stack_b, int argc, char c);
int		*ft_sorted(int *list_num, int argc);
int		ft_middle(int *list_num, int argc);
int		ft_index(int *list, int valor, int argc);
void	ft_sorted_argc4(int argc, int *stack_a);
int		ft_sorted_argc5(int argc, int *stack_a);
int		ft_sorted_argc6(int argc, int *stack_a);
int		ft_sorted_argc7(int argc, int *stack_a, int chunks); 
int 	main(int argc, char **argv);

// para pruebas
void ft_printints(int argc, int *stack);

#endif