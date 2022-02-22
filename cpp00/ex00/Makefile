NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC = megaphone.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	$(RM) $(NAME)

re: clean all
