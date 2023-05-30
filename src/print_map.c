/*
** EPITECH PROJECT, 2022
** print_map.c
** File description:
** print_map.c
*/

#include <stddef.h>
#include <ncurses.h>

#include "my_sokoban.h"
#include "macros.h"

void print_map(map_settings *map)
{
    for (int count = 0; map->map[count] != NULL; count += 1) {
        mvprintw(X_PLACEMENT, Y_PLACEMENT, "%s", map->map[count]);
    }
}
