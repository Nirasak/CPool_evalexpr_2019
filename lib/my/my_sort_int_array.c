/*
** EPITECH PROJECT, 2019
** my_sort_int_array
** File description:
** sort int array
*/

void my_sort_int_array(int *array, int size)
{
    int stock = 0;
    int k = 0;

    for (int j = 0; j < size; j++) {
        stock = array[j];
        k = j;
        for (int i = j; i < size; i++) {
            if (array[i] < stock) {
                stock = array[i];
                k = i;
            }
        }
        array[k] = array[j];
        array[j] = stock;
    }
}
