/*
** EPITECH PROJECT, 2022
** play sokoba
** File description:
** play sokoban
*/

#include <ncurses.h>
#include <stdlib.h>

#include "my_sokoban.h"
#include "macros.h"
#include "lib.h"

static int end_of_game(map_settings *map, WINDOW *window)
{
    int game_status = map->is_game_won;
    delwin(window);
    endwin();
    free_2d_array(map->map);
    free(map->holes.pos);
    free(map->boxes.pos);
    free(map);
    timeout(50);
    if (game_status == 1) {
        my_printf("You won !\n");
        return WIN_EXIT;
    } else {
        my_printf("You lose !\n");
        return LOSE_EXIT;
    }
}

int play_sokoban(char *filepath)
{
    WINDOW *window = initscr();
    map_settings *map = setup_map_values(filepath);
    int ch = 0;

    keypad(window, TRUE);
    refresh();
    print_map(map);
    while (verify_win(map) != WIN_EXIT) {
        if (check_for_lost_game(map) == LOSE_EXIT)
            break;
        ch = getch();
        guess_key(map, ch);
        put_holes(map);
        print_map(map);
    }
    return end_of_game(map, window);
}
