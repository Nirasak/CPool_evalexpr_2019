/*
** EPITECH PROJECT, 2019
** my_strncat.c
** File description:
** strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;

    for (; dest[i] != '\0'; i++);
    for (int j = 0; src[j] != '\0' && nb > 0; j++) {
        dest[i] = src[j];
        i++;
        nb--;
    }
    dest[i] = '\0';
    return (dest);
}
