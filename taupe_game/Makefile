## File description:
## Makefile
##

SRC		=	src/main.c

OBJ		=	$(SRC:.c=.o)

NAME	=	taupe_game

all:	$(NAME)

$(NAME):    $(OBJ)
	gcc -o $(NAME) $(SRC) -lcsfml-graphics -lcsfml-window -lcsfml-system
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re:	fclean all
