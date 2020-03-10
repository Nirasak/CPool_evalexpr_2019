/*
** EPITECH PROJECT, 2019
** my_strcapitalize.c
** File description:
** str capitalize
*/

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str)
{
    my_strlowcase(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if ((str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A')
                || (str[i - 1] > 'Z' && str[i- 1] < 'a') || str[i - 1] > 'z')
                && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] = str[i] - 32;
    }
    return (str);
}
