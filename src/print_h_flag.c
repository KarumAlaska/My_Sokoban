/*
** EPITECH PROJECT, 2022
** print_h_flag.c
** File description:
** print_h_flag.c
*/

#include "my_sokoban.h"
#include "lib.h"

void print_h_flag(void)
{
    my_printf("USAGE\n     ./my_sokoban map\n");
    my_printf("DESCRIPTION\n     map file representing the warehouse map,");
    my_printf(" containing '#' for walls,\n\t 'P' for the player, 'X' ");
    my_printf("for the boxes and 'O' for storage locations.");
    return;
}
