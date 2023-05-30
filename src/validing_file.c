/*
** EPITECH PROJECT, 2022
** validing_file.c
** File description:
** validing_file.c
*/

#include "my_sokoban.h"
#include "macros.h"
#include "lib.h"

static int testing_map(char *test_map)
{
    int count_player = 0, count_boxes = 0, count_holes = 0;
    for (int count = 0; count < my_strlen(test_map); count += 1) {
        if (test_map[count] == 'P') {
            count_player += 1;
        }
        if (test_map[count] == 'X') {
            count_boxes += 1;
        }
        if (test_map[count] == 'O') {
            count_holes += 1;
        }
    }
    if (count_player != 1 || count_boxes != count_holes
        || count_boxes < 1 || count_holes < 1) {
        return FAILURE;
    }
    return WIN_EXIT;
}

int validing_file(char **argv)
{
    char *test_map = load_file_in_mem(argv[1]);
    for (int count = 0; count < my_strlen(test_map); count += 1) {
        switch (test_map[count]) {
            case '#':
            case 'P':
            case 'O':
            case 'X':
            case ' ':
            case '\n':
                break;
            default:
                return FAILURE;
        }
    }
    if (testing_map(test_map) == FAILURE) {
        free(test_map);
        return FAILURE;
    }
    free(test_map);
    return WIN_EXIT;
}
