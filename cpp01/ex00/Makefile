NAME = zombie

CC = c++
FLAGS = -Werror -Wall -Wextra -std=c++98

SRC = $(addsuffix .cpp, main Zombie newZombie randomChump)

RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	$(RM) $(NAME)

re: clean all