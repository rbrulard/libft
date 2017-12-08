
NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = *.c
OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
