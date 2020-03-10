/*
** EPITECH PROJECT, 2019
** my_strdup.c
** File description:
** my_strdup
*/

#include <stddef.h>
#include <stdlib.h>

char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *dest = NULL;

    if ((dest = malloc(sizeof(char) * (my_strlen(src) + 1))) == NULL)
        return (NULL);
    my_strcpy(dest, src);
    return (dest);
}
