NAME = animal

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = $(addsuffix .cpp, main Brain Cat Dog Animal)
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	$(RM) *.o

fclean:
	$(RM) $(NAME)

re: fclean all