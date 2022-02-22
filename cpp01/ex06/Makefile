NAME = karenFilter

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = $(addsuffix .cpp, main Karen)
RM = rm -f

all: ${NAME}

${NAME}:
	${CC} ${FLAGS} ${SRC} -o $@

clean:
	${RM} ${NAME}

re: clean all