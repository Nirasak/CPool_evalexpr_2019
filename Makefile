##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc

SRC	=	src/main.c	\
		src/eval_expr.c	\
		src/my_supspace.c	\
		src/calcul.c	\
		src/my_itoa.c	\

OBJ	=	$(SRC:.c=.o)

TESTS	=	tests/test_my_supspace.c	\
		src/my_supspace.c	\
		tests/test_my_itoa.c	\
		src/my_itoa.c	\
		tests/test_my_do_op.c	\
		src/calcul.c	\
		src/eval_expr.c	\
		tests/test_my_calcul.c	\

NAME	=	eval_expr

CFLAGS	=	-W -Wall -I include/

LDFLAGS	=	-L lib/my -lmy

UNITFLAGS	=	-lcriterion --coverage

EXECTESTS	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

tests_run:	$(OBJ)
	make -C lib/my
	$(CC) -o $(EXECTESTS) $(TESTS) $(LDFLAGS) $(CFLAGS) $(UNITFLAGS)
	./$(EXECTESTS) && gcovr --exclude tests/

clean:
	rm -f *~
	rm -f *gc*
	rm -f $(OBJ)
	make clean -C lib/my

fclean:	clean
	rm -f $(NAME)
	rm -f $(EXECTESTS)
	make fclean -C lib/my

re:	fclean all

.PHONY:	all clean fclean re
