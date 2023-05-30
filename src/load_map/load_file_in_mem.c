/*
** EPITECH PROJECT, 2022
** load_file_in_mem
** File description:
** load_file_in_mem
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>

#include "my_sokoban.h"

char *load_file_in_mem(char const *filepath)
{
    struct stat s;
    stat(filepath, &s);
    char *content = malloc(sizeof(char) * (s.st_size + 1));
    int fd = open(filepath, O_RDONLY);

    read(fd, content, s.st_size);
    close(fd);
    content[s.st_size] = '\0';
    return content;
}
