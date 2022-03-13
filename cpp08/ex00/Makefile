NAME = easyfind

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	$(RM) *.o

fclean:
	$(RM) $(NAME)

re: fclean all