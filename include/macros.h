/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-sokoban-arthur.lassausaie
** File description:
** macros
*/

#ifndef MACROS_H_
    #define MACROS_H_

    #define WIN_EXIT 0
    #define LOSE_EXIT 1
    #define FAILURE 84
    #define EMPTY_CHAR ' '
    #define X_PLACEMENT (LINES / 2) - (map->size.x_axe / 2) + count
    #define Y_PLACEMENT (COLS / 2) - (map->size.y_axe / 2)
    #define HOLES_POS_X map->holes.pos[count].x_axe
    #define HOLES_POS_Y map->holes.pos[count].y_axe

#endif /* !MACROS_H_ */
