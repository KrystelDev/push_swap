# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 11:09:46 by kryrodri          #+#    #+#              #
#    Updated: 2023/10/30 20:56:00 by kryrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc -g
FLAGS = -Wall -Wextra -Werror

# Nombre del proyecto
NAME	= push_swap

# Archivos que uso al compilar
FUNCTION	=  main.c ft_all_isdigit.c ft_iscpy.c ft_all_isint.c\
				ft_isnotsorted.c ft_conversorint.c ft_s.c ft_r.c ft_rr.c\
				ft_p.c ft_middle.c ft_sorted.c ft_index.c ft_sorted_argc4.c\
				ft_sorted_argc5.c ft_sorted_argc6.c ft_sorted_argc7.c\
				
				
P_PF		= ft_printf
P_L			= libft

LIB_A		= ./libft/libft.a
PF_A		= ./ft_printf/libftprintf.a
# Tenemos que transformar los .c en .o para poder compilar
OBJS	= $(FUNCTION:.c=.o)

# La libreria
HEADER	= push_swap.h
CP		= cp
# Se compila el archivo binario (ejecutable).
all:  lib printf ${NAME}

# esto es para que vaya al make de la carpeta libft y haga el all
lib:
	${MAKE} -C ${P_L} all
# ${CP} ${P_L}/${LIB_A} .

# esto es para que vaya al make de la carpeta printf y haga el all
printf:
	${MAKE} -C ${P_PF} all
# ${CP} ${P_PF}/${PF_A} .

# Se compila los objetos on las librerias y archivos.
${NAME}: ${OBJS} ${HEADER}
	@echo "ejecutando ${NAME}"
	$(CC) $(FLAGS) ${OBJS} -o ${NAME} $(LIB_A) $(PF_A)

# Si no tuvieramos main.c usariamos el ar rcs en su lugar.
# ${NAME}: ${OBJS} ${HEADER}
# 	@echo "Generando la libreria ${NAME}..."
# 	ar rcs $(NAME) ${OBJS}

# Mirar google TODO
%.o: %.c Makefile ${HEADER}
	@echo "Compilando el objeto $@..."
	$(CC) -c $(FLAGS) $< -o $@
#	gcc -c -Wall -Wextra -Werror ...
# $@  = (todos los .o)
# $< = (Todos los inputs, seria todos los .c y su header (.h))
# -c es para convertir los .c en .o (.o = objetos, listos para usar)

# -f es para decir que si no existen ignoralos (evitando avisos como de errores innecesarios.)
clean:
	@echo "Ejecutando clean..."
	rm -f $(OBJS)
	@${MAKE} -C ${P_PF} clean
	@${MAKE} -C ${P_L} clean

fclean: clean
	@echo "Ejecutando fclean..."
	rm -f $(NAME) $(LIB_A) $(PF_A)
	@${MAKE} -C ${P_PF} fclean
	@${MAKE} -C ${P_L} fclean

re: fclean all
	@echo "Ejecutando re..."

# Le dice al make que estos nombre no son archivos
.PHONY: re printf lib fclean clean all