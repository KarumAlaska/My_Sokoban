/*
** EPITECH PROJECT, 2022
** free_functions.c
** File description:
** free_functions.c
*/

#include <stdlib.h>

#include "my_sokoban.h"

void free_2d_array(char **arrays)
{
    if (arrays == NULL)
        return;
    for (int count = 0; arrays[count] != NULL; count += 1)
        free(arrays[count]);
    free(arrays);
}
