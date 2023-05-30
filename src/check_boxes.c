/*
** EPITECH PROJECT, 2022
** check boxes
** File description:
** check boxes
*/

#include <stdlib.h>

#include "my_sokoban.h"
#include "macros.h"

void check_box_up(map_settings *map)
{
    if (map->map[map->pos_plr.x_axe - 2][map->pos_plr.y_axe] != '#' &&
        map->map[map->pos_plr.x_axe - 1][map->pos_plr.y_axe] != '#') {
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = ' ';
            map->map[map->pos_plr.x_axe - 2][map->pos_plr.y_axe] = 'X';
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = EMPTY_CHAR;
            map->pos_plr.x_axe -= 1;
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = 'P';
            free(map->boxes.pos);
            setup_boxes_infos(map);
    }
}

void check_box_down(map_settings *map)
{
    if (map->map[map->pos_plr.x_axe + 2][map->pos_plr.y_axe] != '#' &&
        map->map[map->pos_plr.x_axe + 1][map->pos_plr.y_axe] != '#') {
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = ' ';
            map->map[map->pos_plr.x_axe + 2][map->pos_plr.y_axe] = 'X';
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = EMPTY_CHAR;
            map->pos_plr.x_axe += 1;
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = 'P';
            free(map->boxes.pos);
            setup_boxes_infos(map);
    }
}

void check_box_left(map_settings *map)
{
    if (map->map[map->pos_plr.x_axe][map->pos_plr.y_axe - 2] != '#' &&
        map->map[map->pos_plr.x_axe][map->pos_plr.y_axe - 1] != '#') {
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = ' ';
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe - 2] = 'X';
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = EMPTY_CHAR;
            map->pos_plr.y_axe -= 1;
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = 'P';
            free(map->boxes.pos);
            setup_boxes_infos(map);
    }
}

void check_box_right(map_settings *map)
{
    if (map->map[map->pos_plr.x_axe][map->pos_plr.y_axe + 2] != '#' &&
        map->map[map->pos_plr.x_axe][map->pos_plr.y_axe + 1] != '#') {
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = ' ';
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe + 2] = 'X';
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = EMPTY_CHAR;
            map->pos_plr.y_axe += 1;
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = 'P';
            free(map->boxes.pos);
            setup_boxes_infos(map);
    }
}
