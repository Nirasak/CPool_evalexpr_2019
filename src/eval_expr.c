/*
** EPITECH PROJECT, 2019
** eval_expr.c
** File description:
** eval expr
*/

#include <stdlib.h>
#include "my.h"

int my_check_string(char *str)
{
    for (int i = 1; str[i] != '\0'; i++)
        if (str[i] == '+' || str[i] == '-' || str[i] == '*'
            || str[i] == '/' || str[i] == '%' || str[i] == '('
            || str[i] == ')')
            return (1);
    return (0);
}

char *my_par_inter(char *src, int i, int j)
{
    char *str = NULL;
    int count = 0;

    if ((str = my_strndup(&(src[j + 1]), i - j - 1)) == NULL)
        return (NULL);
    if ((str = my_check_ope(str)) == NULL)
        return (NULL);
    for (int z = 1; str[z] != '\0'; z++)
        if (str[z] == '-' || str[z] == '+' || str[z] == '*'
            || str[z] == '/' || str[z] == '%')
            count++;
    if (count == 0)
        src = my_update_string(src, j, i + 1, str);
    if (count != 0)
        src = my_update_string(src, j + 1, i, str);
    if (src == NULL)
        return (NULL);
    return (src);
}

char *my_parenthesis(char *src, int *check)
{
    int i = 0;
    int j = 0;

    while (src[i] != '\0' && src[i] != ')')
        i++;
    if (src[i] == '\0')
        return (src);
    *check = 1;
    j = i;
    while (src[j] != '(')
        j--;
    return (my_par_inter(src, i, j));
}

char *my_main_loop(char *str)
{
    int check = 0;

    while (my_check_string(str) == 1) {
        str = my_parenthesis(str, &check);
        if (check == 0)
            str = my_check_ope(str);
        if (str == NULL)
            return (NULL);
        check = 0;
    }
    my_putstr(str);
    my_putchar('\n');
    return (str);
}

int eval_expr(char *src)
{
    char *str = my_strdup(src);

    str = my_supspace(str);
    str = my_main_loop(str);
    if (str == NULL)
        return (84);
    free(str);
    return (0);
}
