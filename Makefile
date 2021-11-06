CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = list

RM = rm -f

SOURCES = ./src/ft_addback.c ./src/ft_addfront.c ./src/ft_addorder.c ./src/ft_delelement.c \
			./src/ft_print_list.c ./src/ft_free_list.c ./src/libft.c main.c 

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
