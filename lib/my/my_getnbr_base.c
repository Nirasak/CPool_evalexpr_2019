/*
** EPITECH PROJECT, 2019
** my_getnbr_base.c
** File description:
** my_getnbr_base
*/

#include <stdlib.h>

char *my_revstr(char *str);
int my_strlen(char const *str);
char *my_strdup(char const *str);
int my_compute_power_rec(int nb, int p);

char *my_start_getnbr_base(int *sign, char const *str)
{
    int i = 0;
    char *stock;

    for (; str[i] == '-' || str[i] == '+'; i++)
        if (str[i] == '-')
            *sign = -*sign;
    str = &str[i];
    stock = my_strdup(str);
    my_revstr(stock);
    return (stock);
}

int my_getnbr_base(char const *str, char const *base)
{
    int sign = 1;
    int j = 0;
    int len = my_strlen(base);
    char *stock = my_start_getnbr_base(&sign, str);
    int result = 0;

    for (int i = 0; stock[i] != '\0'; i++) {
        for (; stock[i] != base[j]; j++);
        if (result >= 0)
            result = result + my_compute_power_rec(len, i) * j;
        if (result < 0)
            result = result - (my_compute_power_rec(len, i) * j);
        if (sign < 0 && result > 0)
            result = result * sign;
        j = 0;
    }
    free(stock);
    return (result);
}
