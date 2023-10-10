NAME = libftprintf.a
SRC_DIR = src
SRC =	$(SRC_DIR)/ft_putchar.c \
	$(SRC_DIR)/ft_strdup.c \
	$(SRC_DIR)/ft_itoa.c \
	$(SRC_DIR)/ft_utoa.c \
	$(SRC_DIR)/ft_istype.c \
	$(SRC_DIR)/ft_print_char.c \
	$(SRC_DIR)/ft_print_str.c \
	$(SRC_DIR)/ft_print_int.c \
	$(SRC_DIR)/ft_print_unsigned.c \
	$(SRC_DIR)/ft_print_hex_l.c \
	$(SRC_DIR)/ft_print_hex_u.c \
	$(SRC_DIR)/ft_print_ptr.c \
	$(SRC_DIR)/ft_printf.c
OBJ = $(SRC:.c=.o)
INCLUDES_DIR = includes
HEADER = $(INCLUDES_DIR)/ft_printf.h
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -I includes -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
