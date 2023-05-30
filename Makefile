##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC			=	main.c \
				my_sokoban.c \
				play_sokoban.c \
				print_h_flag.c \
				free_functions.c \
				load_map/load_2d_map.c \
				load_map/load_file_in_mem.c \
				load_map/mem_alloc_2d_array.c \
				load_map/get_nb_rows_and_cols.c \
				validing_file.c \
				print_map.c \
				get_player_position.c \
				guess_key.c \
				setup_map_values.c \
				change_player_position.c \
				check_boxes.c \
				verify_win.c \
				check_for_lost_game.c

OBJ = $(addprefix src/, $(SRC:.c=.o))

NAME = my_sokoban

CPPFLAGS = -Wall -Wextra -Werror -I./include/

LDNCUR		=	-lncurses

LDFLAGS	=	-L./lib/my

LDLIBS	=	-lmy

LIB	=	libmy.a

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
		gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) $(LDNCUR)

$(LIB):
		make -C ./lib/my

clean:
		rm -f $(OBJ)
		make -C lib/my/ clean

fclean: clean
		rm -f $(NAME)
		make -C lib/my/ fclean

re: fclean all

.PHONY: all clean fclean re unit_tests run_tests tests_run
