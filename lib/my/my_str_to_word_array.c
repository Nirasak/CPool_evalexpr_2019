/*
** EPITECH PROJECT, 2019
** my_str_to_word_array.c
** File description:
** str to word array
*/

#include <stddef.h>
#include <stdlib.h>

int my_isalphanum(char c)
{
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
        || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

int count_words(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
            || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
            count++;
    return (count);
}

char **my_str_to_word_array(char const *str)
{
    int count = count_words(str);
    int j = 0;
    int x = 0;
    char **array = malloc(sizeof(char *) * (count + 2));

    for (int i = 0; str[i] != '\0'; j++) {
        for (; my_isalphanum(str[i]) == 0 && str[i] != '\0'; i++);
        if (str[i] == '\0')
            break;
        for (x = i; my_isalphanum(str[x]) == 1; x++);
        array[j] = malloc(sizeof(char) * (x - i + 2));
        for (x = 0; my_isalphanum(str[i]) == 1; i++) {
            array[j][x] = str[i];
            x++;
        }
        array[j][x] = '\0';
    }
    array[j] = NULL;
    return (array);
}
