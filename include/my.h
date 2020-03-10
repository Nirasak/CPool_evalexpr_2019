/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#define ABS(value) (((value) > 0) ? (value) : (-value))

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr_base(char const *str, char const *base);
int my_getnbr(char const *str);
int my_isneg(int n);
int my_is_prime(int nb);
void my_putchar(char c);
char *my_putnbr_base(int nbr, char const *base);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *array, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
char *my_strndup(char const *src, int i);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char *const s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char **my_str_to_word_array(char const *str);
int count_words(char const *str);
int my_isalphanum(char c);
char *my_start_getnbr_base(int *sign, char const *str);
char *my_neg_putnbr_base(int nbr, char const *base, char *str);
int check_overflow(int nb, int stock, int sign);
int same_start(char *str, char const *to_find, int i);
char *same_str(char *str, char const *to_find, int i);
int my_show_word_array(char * const *tab);
char *convert_base(char const *nbr, char const *base_from, char const *base_to);
int eval_expr(char *src);
char *my_supspace(char *str);
char *my_check_ope(char *str);
char *my_update_string(char *src, int j, int k, char *str);
char *my_itoa(int nb);

#endif
