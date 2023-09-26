NAME = libftprintf.a
SRC_DIR = src
SRC = $(wildcard $(SRC_DIR)/* .c)
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
