# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/18 13:58:46 by ehafidi           #+#    #+#              #
#    Updated: 2020/10/18 22:12:15 by ehafidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -rf

NASM = nasm
NFLAGS = -f macho64

NAME = libasm.a
SRC = ft_read.s ft_strcmp.s ft_strcpy.s \
ft_strdup.s ft_strlen.s ft_write.s \

OBJ = $(SRC:.s=.o)
INCLUDE = libasm.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.s
	$(NASM) $(NFLAGS) -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) a.out

re: fclean all
