/*
** EPITECH PROJECT, 2019
** my_str_is_printable.c
** File description:
** my str is printable
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < 20 || str[i] == 127)
            return (0);
    return (1);
}
