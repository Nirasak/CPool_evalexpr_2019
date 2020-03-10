/*
** EPITECH PROJECT, 2019
** my_strndup.c
** File description:
** my_strndup
*/

#include <stddef.h>
#include <stdlib.h>

char *my_strncpy(char *dest, char const *src, int i);
int my_strlen(char const *str);

char *my_strndup(char const *src, int i)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));

    if (dest == NULL)
        return (NULL);
    my_strncpy(dest, src, i);
    return (dest);
}
