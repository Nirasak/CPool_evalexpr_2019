##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	my_putstr.c		\
		my_str_isnum.c		\
		convert_base.c		\
		my_revstr.c		\
		my_str_isprintable.c	\
		my_showmem.c		\
		my_str_isupper.c	\
		my_compute_power_rec.c	\
		my_showstr.c		\
		my_strlen.c		\
		my_compute_square_root.c	\
		my_show_word_array.c	\
		my_strlowcase.c		\
		my_find_prime_sup.c	\
		my_sort_int_array.c	\
		my_strncat.c		\
		my_getnbr_base.c	\
		my_strcapitalize.c	\
		my_strncmp.c		\
		my_getnbr.c		\
		my_strcat.c		\
		my_strncpy.c		\
		my_isneg.c		\
		my_strcmp.c		\
		my_strstr.c		\
		my_is_prime.c		\
		my_strcpy.c		\
		my_str_to_word_array.c	\
		my_putchar.c		\
		my_strdup.c		\
		my_strndup.c		\
		my_strupcase.c		\
		my_putnbr_base.c	\
		my_str_isalpha.c	\
		my_swap.c		\
		my_put_nbr.c		\
		my_str_islower.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)
	cp $(NAME) ../

clean:
	rm -f *~

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re: fclean all

.PHONY: all clean fclean re
