/*
** EPITECH PROJECT, 2022
** my sokoban
** File description:
** my sokoban
*/

#ifndef MY_SOKOBAN_
    #define MY_SOKOBAN_

    #include "structs.h"

void print_h_flag(void);
void free_2d_array(char **arrays);
int validing_file(char **argv);
int get_nb_rows(char const *map);
int get_nb_cols(char const *map);
int my_sokoban(int argc, char **argv);
int play_sokoban(char *filepath);
void load_2d_map(char const *content, map_settings *map);
char **mem_alloc_2d_array(int row, int col);
char *load_file_in_mem(char const *filepath);
void get_player_position_and_boxes(map_settings *map);
int check_for_lost_game(map_settings *map);
int verify_win(map_settings *map);
void print_map(map_settings *map);
void put_holes(map_settings *map);
void player_go_down(map_settings *map);
void player_go_up(map_settings *map);
void player_go_left(map_settings *map);
void player_go_right(map_settings *map);
void check_box_left(map_settings *map);
void check_box_down(map_settings *map);
void check_box_up(map_settings *map);
void check_box_right(map_settings *map);
map_settings *setup_map_values(char const *filepath);
void setup_boxes_infos(map_settings *map);
void guess_key(map_settings *map, int ch);

#endif /* !MY_SOKOBAN_ */
