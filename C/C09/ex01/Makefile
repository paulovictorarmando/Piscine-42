# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: parmando <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 09:39:08 by parmando          #+#    #+#              #
#    Updated: 2024/03/18 09:39:18 by parmando         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
DEPS = includes
OBJDIR = srcs

TARGET =  ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
OBJS = ${addprefix $(OBJDIR)/, $(TARGET)}

%.o : %.c 
	$(CC) $(FLAGS) -c $< -o $@ -I $(DEPS)

all: libft.a

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all

libft.a: $(OBJS)
	ar -rc libft.a $^
	
