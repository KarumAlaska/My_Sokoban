/*
** EPITECH PROJECT, 2022
** mem_alloc_2d_array
** File description:
** mem_alloc_2d_array
*/

#include <stdlib.h>

#include "my_sokoban.h"

char **mem_alloc_2d_array(int row, int col)
{
    if (row == 0 || col == 0) {
        return NULL;
    }

    char **result = malloc(sizeof(char *) * (row + 1));

    for (int count = 0; count < row; count += 1) {
        result[count] = malloc(sizeof(char) * (col + 1));
        result[count][col] = '\0';
    }

    result[row] = NULL;

    return result;
}
