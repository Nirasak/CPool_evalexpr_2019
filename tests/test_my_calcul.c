/*
** EPITECH PROJECT, 2019
** test_my_calcul.c
** File description:
** test my calcul
*/

#include <criterion/criterion.h>

char *my_strcpy(char *str, char const *src);
char *my_strdup(char *str, int i);
char *my_check_ope(char *src);
char *my_update_string(char *src, int j, int k, char *str);
char *my_main_loop(char *str);
int eval_expr(char *src);

Test(my_check_ope, test_one)
{
    char *str = malloc(sizeof(char) * 4);

    str = my_strcpy(str, "5+5");
    str = my_check_ope(str);
    cr_assert_str_eq(str, "10");
}

Test(my_main_loop, test_one)
{
    char *str = malloc(sizeof(char) * 25);

    str = my_strcpy(str, "5+5*17-(18*4)+72/5-764%3");
    str = my_main_loop(str);
    cr_assert_str_eq(str, "30");
}

Test(my_main_loop, test_two)
{
    char *str = malloc(sizeof(char) * 12);

    str = my_strcpy(str, "48+-5*-5+48");
    str = my_main_loop(str);
    cr_assert_str_eq(str, "121");
}

Test(my_main_loop, test_three)
{
    char *str = malloc(sizeof(char) * 9);

    str = my_strcpy(str, "-5+-5+48");
    str = my_main_loop(str);
    cr_assert_str_eq(str, "38");
}

Test(my_main_loop, test_four)
{
    char *str = malloc(sizeof(char) * 9);

    str = my_strcpy(str, "(4+5*5/3%2-3+5)*2");
    str = my_main_loop(str);
    cr_assert_str_eq(str, "12");
}

Test(my_main_loop, test_five)
{
    char *str = malloc(sizeof(char) * 40);

    str = my_strcpy(str, "(((((((((((4+5*5/3%2-3+5)*2))))))))))");
    str = my_main_loop(str);
    cr_assert_str_eq(str, "12");
}

Test(eval_expr, test_one)
{
    char *str = malloc(sizeof(char) * 9);

    str = my_strcpy(str, "-5+-5+48");
    cr_assert(eval_expr(str) == 0);
}
