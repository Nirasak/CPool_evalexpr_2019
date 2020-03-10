/*
** EPITECH PROJECT, 2019
** my_putnbr_base.c
** File description:
** putnbr base
*/

#include <stdlib.h>

int my_strlen(char const *str);
int my_compute_power_rec(int nb, int p);

char *my_neg_putnbr_base(int nbr, char const *base, char *str)
{
    int len = my_strlen(base);
    int p = 0;
    int i = 0;
    int j = 0;

    for (; nbr + my_compute_power_rec(len, p) <= 0; p++);
    str = malloc(sizeof(char) * (p + 2));
    if (nbr < 0)
        str[j] = '-';
    j++;
    p--;
    for (; p >= 0; p--) {
        for (i = 0; nbr + my_compute_power_rec(len, p) * i <= 0; i++);
        i--;
        str[j] = base[i];
        nbr = nbr + (my_compute_power_rec(len, p) * i);
        j++;
    }
    str[j] = '\0';
    return (str);
}

char *my_putnbr_base(int nbr, char const *base)
{
    char *str;
    int len = my_strlen(base);
    int p = 0;
    int i = 0;
    int j = 0;

    if (nbr < 0)
        return (my_neg_putnbr_base(nbr, base, str));
    for (; nbr - my_compute_power_rec(len, p) >= 0; p++);
    str = malloc(sizeof(char) * (p + 1));
    p--;
    for (; p >= 0; p--) {
        for (i = 0; nbr - my_compute_power_rec(len, p) * i >= 0; i++);
        i--;
        str[j] = base[i];
        nbr = nbr - (my_compute_power_rec(len, p) * i);
        j++;
    }
    str[j] = '\0';
    return (str);
}
