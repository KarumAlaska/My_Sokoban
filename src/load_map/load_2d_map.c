/*
** EPITECH PROJECT, 2022
** load_2d_arr_from_file
** File description:
** load_2d_arr_from_file
*/

#include "my_sokoban.h"

void load_2d_map(char const *content, map_settings *map)
{
    map->size.x_axe = get_nb_rows(content);
    map->size.y_axe = get_nb_cols(content);
    map->map = mem_alloc_2d_array(map->size.x_axe, map->size.y_axe);
    int x = 0;
    int y = 0;
    for (int count = 0; content[count] != '\0'; count += 1) {
        if (content[count] == '\n') {
            map->map[x][y] = '\0';
            x += 1;
            y = 0;
        } else {
            map->map[x][y] = content[count];
            y += 1;
        }
    }
}
