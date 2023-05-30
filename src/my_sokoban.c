/*
** EPITECH PROJECT, 2022
** my_popup.c
** File description:
** my_popup.c
*/

#include <sys/stat.h>

#include "my_sokoban.h"
#include "macros.h"

int my_sokoban(int argc, char **argv)
{
    struct stat s;
    if (argc == 1 || argc >= 3)
        return FAILURE;
    stat(argv[1], &s);
    if (!(s.st_mode &S_IFREG) && argv[1][0] == '-' && argv[1][1] == 'h') {
        print_h_flag();
        return WIN_EXIT;
    }
    if (validing_file(argv) == FAILURE)
        return FAILURE;

    return play_sokoban(argv[1]);
}
