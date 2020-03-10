/*
** EPITECH PROJECT, 2019
** my_supspace.c
** File description:
** eval_expr
*/

#include "my.h"

char *my_supspace(char *str)
{
    int i = 0;

    for (int j = 0; str[j] != '\0'; j++) {
        while (str[j] == ' ')
            j++;
        str[i] = str[j];
        i++;
    }
    str[i] = '\0';
    return (str);
}
