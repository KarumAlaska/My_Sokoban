/*
** EPITECH PROJECT, 2022
** change_position.c
** File description:
** change_position.c
*/

#include <ncurses.h>

#include "my_sokoban.h"
#include "macros.h"

void put_holes(map_settings *map)
{
    for (int count = 0; count < map->holes.nb_holes; count += 1) {
        if (map->map[HOLES_POS_X][HOLES_POS_Y] == ' ') {
            map->map[HOLES_POS_X][HOLES_POS_Y] = 'O';
        }
    }
}

void guess_key(map_settings *map, int ch)
{
    switch (ch) {
        case KEY_LEFT:
        case 'Q':
            player_go_left(map);
            break;
        case KEY_RIGHT:
        case 'D':
            player_go_right(map);
            break;
        case KEY_UP:
        case 'Z':
            player_go_up(map);
            break;
        case KEY_DOWN:
        case 'S':
            player_go_down(map);
            break;
        default:
            break;
    }
}
