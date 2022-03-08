NAME = convert

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = $(addsuffix .cpp, main)
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	$(RM) *.o

fclean:
	$(RM) $(NAME)

re: fclean all