NAME = diamondtrap

CC = c++
FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

SRC = $(addsuffix .cpp, main ClapTrap FragTrap ScavTrap DiamondTrap)
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	$(RM) *.o

fclean:
	$(RM) $(NAME)

re: fclean all