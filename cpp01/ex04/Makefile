NAME = replace

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	$(RM) $(NAME)

re: clean all
