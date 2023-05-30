/*
** EPITECH PROJECT, 2022
** get_player_position.c
** File description:
** get_player_position.c
*/

#include <stddef.h>

#include "my_sokoban.h"

void get_player_position_and_boxes(map_settings *map)
{
    map->holes.nb_holes = 0;
    map->boxes.nb_boxes = 0;
    for (int count = 0; map->map[count] != NULL; count += 1) {
        int count2 = 0;
        while (map->map[count][count2] != '\0') {
            count2 += 1;
            switch (map->map[count][count2]) {
                case 'P':
                    map->pos_plr.x_axe = count;
                    map->pos_plr.y_axe = count2;
                    break;
                case 'O':
                    map->holes.nb_holes += 1;
                    map->boxes.nb_boxes += 1;
                    break;
                default:
                    break;
            }
        }
    }
}
