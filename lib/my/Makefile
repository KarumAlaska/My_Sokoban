##
## EPITECH PROJECT, 2022
## make file
## File description:
## make file
##

SRC     =	my_compute_power_rec.c \
			my_compute_square_root.c \
			my_find_prime_sup.c \
			my_getnbr.c \
			my_isneg.c \
			my_is_prime.c \
			my_putchar.c \
			my_put_nbr.c \
			my_putstr.c \
			my_revstr.c \
			my_showmem.c \
        	my_showstr.c \
			my_sort_int_array.c \
        	my_strcapitalize.c \
			my_strcat.c \
			my_strcmp.c \
			my_strcpy.c \
        	my_str_isalpha.c \
			my_str_islower.c \
			my_str_isnum.c \
        	my_str_isprintable.c \
	    	my_str_isupper.c \
			my_strlen.c \
			my_strlowcase.c \
			my_strncat.c \
			my_strncmp.c \
			my_strncpy.c \
			my_strstr.c \
			my_strupcase.c \
			my_swap.c \
			my_printf/flags/b_flag.c \
			my_printf/flags/o_flag.c \
			my_printf/flags/p_flag.c \
			my_printf/flags/percent_flag.c \
			my_printf/flags/s_flag_printable.c \
			my_printf/flags/u_flag.c \
			my_printf/flags/x_flag.c \
			my_printf/flags/x_flag_upcase.c \
			my_printf/main_function/call_flag.c \
			my_printf/main_function/call_flag2.c \
			my_printf/main_function/call_flag3.c \
			my_printf/main_function/check_flags.c \
			my_printf/main_function/function_pointers.c \
			my_printf/main_function/my_printf.c

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

all:    $(NAME)

$(NAME):        $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp lib.h ../../include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
