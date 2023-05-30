/*
** EPITECH PROJECT, 2022
** setup_map_values.c
** File description:
** setup_map_values.c
*/

#include <stdlib.h>

#include "my_sokoban.h"

void setup_holes_infos(map_settings *map)
{
    int nb_holes_done = 0;
    map->holes.pos = malloc(sizeof(x_and_y) * map->holes.nb_holes);
    for (int count = 0; count < map->size.x_axe; count += 1) {
        for (int count2 = 0; count2 < map->size.y_axe; count2 += 1) {
            switch (map->map[count][count2]) {
                case 'O':
                    map->holes.pos[nb_holes_done].y_axe = count2;
                    map->holes.pos[nb_holes_done].x_axe = count;
                    nb_holes_done += 1;
                    break;
                default:
                    break;
            }
        }
    }
}

void setup_boxes_infos(map_settings *map)
{
    int nb_boxes_done = 0;
    map->boxes.pos = malloc(sizeof(x_and_y) * (map->boxes.nb_boxes));
    for (int count = 0; count < map->size.x_axe; count += 1) {
        for (int count2 = 0; count2 < map->size.y_axe; count2 += 1) {
            switch (map->map[count][count2]) {
                case 'X':
                    map->boxes.pos[nb_boxes_done].y_axe = count2;
                    map->boxes.pos[nb_boxes_done].x_axe = count;
                    nb_boxes_done += 1;
                    break;
                default:
                    break;
            }
        }
    }
}

map_settings *setup_map_values(char const *filepath)
{
    map_settings *map = malloc(sizeof(map_settings));
    map->is_game_won = 0;
    char *array_map = load_file_in_mem(filepath);
    load_2d_map(array_map, map);
    free(array_map);
    get_player_position_and_boxes(map);
    setup_holes_infos(map);
    setup_boxes_infos(map);
    return map;
}
