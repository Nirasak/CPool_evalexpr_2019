/*
** EPITECH PROJECT, 2019
** my_strstr.c
** File description:
** strstr
*/

char *same_str(char *str, char const *to_find, int i)
{
    for (int j = 0; to_find[j]; i++) {
        if (str[i] == '\0')
            return (0);
        if (str[i] != to_find[j])
            return (0);
        j++;
    }
    return (str);
}

int same_start(char *str, char const *to_find, int i)
{
    for (; str[i] != to_find[0]; i++)
        if (str[i] == '\0')
            return (-1);
    return (i);
}

char *my_strstr(char *str, char const *to_find)
{
    char *result;

    if (to_find[0] == '\0')
        return (&str[0]);
    for (int i = 0; str[i]; i++) {
        i = same_start(str, to_find, i);
        if (i == -1)
            return (0);
        if (same_str(str, to_find, i) != 0)
            return (&str[i]);
    }
    return (0);
}
