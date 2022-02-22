NAME = fixed

CC = c++
FLAGS = -Wall -Wextra -Werror

SRC = $(addsuffix .cpp, main Fixed)
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	$(RM) *.o

fclean:
	$(RM) $(NAME)

re: fclean all