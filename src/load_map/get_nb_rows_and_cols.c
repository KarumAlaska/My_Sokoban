/*
** EPITECH PROJECT, 2022
** get_nb_rows_and_cols.c
** File description:
** get_nb_rows_and_cols.c
*/

#include "my_sokoban.h"
#include "lib.h"

int get_nb_rows(char const *map)
{
    int nb_rows = 0;

    for (int count = 0; count < my_strlen(map); count += 1) {
        if (map[count] == '\n') {
            nb_rows += 1;
        }
    }
    if (nb_rows > 0) {
        nb_rows += 1;
    }
    return nb_rows;
}

int get_nb_cols(char const *map)
{
    int nb_cols = 0;
    int test_col = 0;

    for (int count = 0; count < my_strlen(map); count += 1) {
        if (test_col > nb_cols) {
            nb_cols = test_col;
        }
        if (map[count] == '\n') {
            test_col = 0;
        } else {
            test_col += 1;
        }
    }
    return nb_cols;
}
