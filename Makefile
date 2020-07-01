##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile for palindrome
##

NAME	=	palindrome

SRC	=	src/main.c		\
		src/get_info.c		\
		src/int_to_string.c	\
		src/turnover.c

CFLAGS	+=	-Wall -Wextra -Iinclude/ -O2

DFLAG	+=	-g

OBJ	=	$(SRC:.c=.o)

all:		$(OBJ)
	gcc $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
