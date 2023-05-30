/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-sokoban-arthur.lassausaie
** File description:
** check_for_lost_game
*/

#include <stddef.h>

#include "structs.h"
#include "macros.h"
#include "lib.h"

static int check_blocked_box(char **map, x_and_y pos, x_and_y size)
{
    int nb_wall = 0;

    if (pos.x_axe < size.x_axe && map[pos.x_axe + 1][pos.y_axe] == '#') {
        if ((pos.y_axe > 0 && map[pos.x_axe][pos.y_axe - 1] == '#') ||
            (pos.y_axe < size.y_axe && map[pos.x_axe][pos.y_axe + 1] == '#'))
                nb_wall += 1;
    }
    if (pos.x_axe > 0 && map[pos.x_axe + 1][pos.y_axe] == '#') {
        if ((pos.y_axe > 0 && map[pos.x_axe][pos.y_axe - 1] == '#') ||
            (pos.y_axe < size.y_axe && map[pos.x_axe][pos.y_axe + 1] == '#'))
                nb_wall += 1;
    }
    if (nb_wall > 1)
        return LOSE_EXIT;
    return WIN_EXIT;
}

int check_for_lost_game(map_settings *map)
{
    int blocked_boxes = 0;
    for (int index = 0; index < map->boxes.nb_boxes; index += 1) {
        x_and_y box = map->boxes.pos[index];
        blocked_boxes += check_blocked_box(map->map, box, map->size);
    }
    if (blocked_boxes == map->boxes.nb_boxes) {
        map->is_game_won = 0;
        return LOSE_EXIT;
    }
    return WIN_EXIT;
}
