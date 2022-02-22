NAME = zombieHorde

CC = c++
FLAGS = -Werror -Wall -Wextra -std=c++98

SRC = $(addsuffix .cpp, main Zombie zombieHorde)
OBJ = $(SRC:cpp=o)

RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	$(RM) $(NAME)

re: clean all