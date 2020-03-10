/*
** EPITECH PROJECT, 2019
** calcul.c
** File description:
** evalexpr
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"

int do_op(int nbr1, int nbr2, char ope)
{
    switch (ope) {
    case '+' :
        return (nbr1 + nbr2);
    case '-' :
        return (nbr1 - nbr2);
    case '*' :
        return (nbr1 * nbr2);
    case '/' :
        return (nbr1 / nbr2);
    case '%' :
        return (nbr1 % nbr2);
    }
    return (0);
}

char *my_update_string(char *src, int j, int k, char *str)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src) + my_strlen(str) + 1));
    int i = 0;

    if (dest == NULL || str == NULL)
        return (NULL);
    for (; i < j; i++)
        dest[i] = src[i];
    for (int m = 0; str[m] != '\0'; m++) {
        dest[i] = str[m];
        i++;
    }
    for (; src[k] != '\0'; k++) {
        dest[i] = src[k];
        i++;
    }
    dest[i] = '\0';
    free(src);
    free(str);
    return (dest);
}

char *my_calcul(char *src, int i, char ope, int result)
{
    char *nb1 = NULL;
    char *nb2 = NULL;
    int j = i - 1;
    int k = i + 1;

    while (src[j] >= '0' && src[j] <= '9')
        j--;
    if (j == 0 && src[j] == '-')
        j--;
    if (j >= 1 && src[j] == '-' && (src[j - 1] < '0' || src[j - 1] > '9'))
        j--;
    if (src[k] == '-')
        k++;
    for (; src[k] >= '0' && src[k] <= '9'; k++);
    nb1 = my_strndup(&src[j + 1], i - j - 1);
    nb2 = my_strndup(&src[i + 1], k - i - 1);
    result = do_op(my_getnbr(nb1), my_getnbr(nb2), ope);
    free(nb1);
    free(nb2);
    return (my_update_string(src, j + 1, k, my_itoa(result)));
}

char *my_check_ope(char *src)
{
    int i = 0;
    char ope = '\0';

    while (
        src[i] != '\0' && src[i] != '*'
        && src[i] != '/' && src[i] != '%')
        i++;
    if (src[i] != '\0')
        ope = src[i];
    if (src[i] == '\0') {
        for (i = 1; src[i] != '\0' && src[i] != '+' && src[i] != '-'; i++);
        ope = src[i];
    }
    if (src[i] == '\0')
        return (src);
    return (my_calcul(src, i, ope, 0));
}
