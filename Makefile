NAME = libftprintf.a
SRC = srcs/ft_printf.c srcs/helper1.c srcs/helper2.c
OBJ = $(SRC:.c=.o)
HEADER = includes/ft_printf.h
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
