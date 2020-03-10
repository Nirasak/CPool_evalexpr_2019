/*
** EPITECH PROJECT, 2019
** convert_base.c
** File description:
** convert base
*/

int my_getnbr_base(char const *str, char const *base);
char *my_putnbr_base(int nbr, char const *base);

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int nb = my_getnbr_base(nbr, base_from);
    char *str = my_putnbr_base(nb, base_to);

    return (str);
}
