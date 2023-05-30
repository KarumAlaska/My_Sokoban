/*
** EPITECH PROJECT, 2022
** verify_win.c
** File description:
** verify_win.c
*/

#include "my_sokoban.h"
#include "macros.h"

int verify_win(map_settings *map)
{
    int boxes_done = 0;

    for (int count = 0; count < map->boxes.nb_boxes; count += 1) {
        if (map->map[HOLES_POS_X][HOLES_POS_Y] == 'X') {
            boxes_done += 1;
        }
    }
    if (boxes_done == map->holes.nb_holes) {
        map->is_game_won = 1;
        return WIN_EXIT;
    }
    return LOSE_EXIT;
}
