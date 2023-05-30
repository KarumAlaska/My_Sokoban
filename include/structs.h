/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-sokoban-arthur.lassausaie
** File description:
** structs
*/

#ifndef STRUCTS_H_
    #define STRUCTS_H_

typedef struct x_and_y_axes {
    int x_axe;
    int y_axe;
} x_and_y;

typedef struct holes_info {
    int nb_holes;
    x_and_y *pos;
} holes_infos;

typedef struct boxes_info {
    int nb_boxes;
    x_and_y *pos;
} boxes_infos;

typedef struct map_values {
    char **map;
    x_and_y size;
    x_and_y pos_plr;
    holes_infos holes;
    boxes_infos boxes;
    int is_game_won;
} map_settings;

#endif /* !STRUCTS_H_ */
