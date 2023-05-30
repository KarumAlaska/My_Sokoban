/*
** EPITECH PROJECT, 2022
** change_player_position.c
** File description:
** change_player_position.c
*/

#include "my_sokoban.h"
#include "macros.h"

void player_go_left(map_settings *map)
{
    if (map->map[map->pos_plr.x_axe][map->pos_plr.y_axe - 1] == 'X') {
        check_box_left(map);
    } else {
        if (map->map[map->pos_plr.x_axe][map->pos_plr.y_axe - 1] != '#') {
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = EMPTY_CHAR;
            map->pos_plr.y_axe -= 1;
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = 'P';
        }
    }
}

void player_go_right(map_settings *map)
{
    if (map->map[map->pos_plr.x_axe][map->pos_plr.y_axe + 1] == 'X') {
        check_box_right(map);
    } else {
        if (map->map[map->pos_plr.x_axe][map->pos_plr.y_axe + 1] != '#') {
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = EMPTY_CHAR;
            map->pos_plr.y_axe += 1;
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = 'P';
        }
    }
}

void player_go_up(map_settings *map)
{
    if (map->map[map->pos_plr.x_axe - 1][map->pos_plr.y_axe] == 'X') {
        check_box_up(map);
    } else {
        if (map->map[map->pos_plr.x_axe - 1][map->pos_plr.y_axe] != '#') {
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = EMPTY_CHAR;
            map->pos_plr.x_axe -= 1;
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = 'P';
        }
    }
}

void player_go_down(map_settings *map)
{
    if (map->map[map->pos_plr.x_axe + 1][map->pos_plr.y_axe] == 'X') {
        check_box_down(map);
    } else {
        if (map->map[map->pos_plr.x_axe + 1][map->pos_plr.y_axe] != '#') {
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = EMPTY_CHAR;
            map->pos_plr.x_axe += 1;
            map->map[map->pos_plr.x_axe][map->pos_plr.y_axe] = 'P';
        }
    }
}
