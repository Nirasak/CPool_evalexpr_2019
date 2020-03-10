/*
** EPITECH PROJECT, 2019
** test_my_supspaces.c
** File description:
** test my supspaces
*/

#include <criterion/criterion.h>

char *my_supspace(char *str);
char *my_strcpy(char *dest, char const *str);

Test(my_supspace, test_one)
{
    char *str = malloc(sizeof(char) * 17);

    str = my_strcpy(str, "ceci est un test");
    cr_assert_str_eq(my_supspace(str), "ceciestuntest");
}
