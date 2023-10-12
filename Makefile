# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 11:09:46 by kryrodri          #+#    #+#              #
#    Updated: 2023/10/12 19:44:13 by kryrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror

# Nombre del proyecto
NAME	= push_swap

# Archivos que uso al compilar
FUNCTION	=  main.c
				
P_PF		= ft_printf
P_L			= libft

# Tenemos que transformar los .c en .o para poder compilar
OBJS	= $(FUNCTION:.c=.o)

# La libreria
HEADER	= push_swap.h

# Se compila el archivo binario (ejecutable).
all:  lib printf ${NAME}

printf:
	@${MAKE} -C ${P_PF} all

lib:
	@${MAKE} -C ${P_L} all

# Se compila los objetos con las librerias y archivos.
${NAME}: ${OBJS} #${HEADER}
	@echo "ejecutando ${NAME}"
	$(CC) $(FLAGS) ${OBJS} -o ${NAME}

# Si no tuvieramos main.c usariamos el ar rcs en su lugar.
# ${NAME}: ${OBJS} ${HEADER}
# 	@echo "Generando la libreria ${NAME}..."
# 	ar rcs $(NAME) ${OBJS}

# Mirar google TODO
%.o: %.c Makefile #${HEADER}
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
	rm -f $(NAME)
	@${MAKE} -C ${P_PF} fclean
	@${MAKE} -C ${P_L} fclean

re: fclean all
	@echo "Ejecutando re..."

# Le dice al make que estos nombre no son archivos
.PHONY: re printf lib fclean clean all