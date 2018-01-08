# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbrulard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/14 15:09:35 by rbrulard          #+#    #+#              #
#    Updated: 2018/01/05 15:43:16 by rbrulard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAG = -Wall -Wextra -Werror

SRC = ft_memccpy.c ft_putnbr.c ft_strequ.c ft_strnequ.c\
ft_atoi.c       ft_memchr.c     ft_putnbr_fd.c  ft_striter.c    ft_strnew.c\
ft_bzero.c      ft_memcmp.c     ft_putstr.c     ft_striteri.c   ft_strnstr.c\
ft_isalnum.c    ft_memcpy.c     ft_putstr_fd.c  ft_strjoin.c    ft_strrchr.c\
ft_isalpha.c    ft_memdel.c     ft_strcat.c     ft_strlcat.c    ft_strsplit.c\
ft_isascii.c    ft_memmove.c    ft_strchr.c     ft_strlen.c     ft_strstr.c\
ft_isdigit.c    ft_memset.c     ft_strclr.c     ft_strmap.c     ft_strsub.c\
ft_isprint.c    ft_putchar.c    ft_strcmp.c     ft_strmapi.c    ft_strtrim.c\
ft_itoa.c       ft_putchar_fd.c ft_strcpy.c     ft_strncat.c    ft_tolower.c\
ft_putendl.c    ft_strdel.c     ft_strncmp.c    ft_toupper.c\
ft_memalloc.c   ft_putendl_fd.c ft_strdup.c     ft_strncpy.c\
ft_lstnew.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	
	gcc -c $(FLAG) $(SRC) -I libft.h
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
