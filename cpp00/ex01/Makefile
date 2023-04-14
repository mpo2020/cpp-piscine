NAME	= phonebook

SRC		= main.cpp

OBJ		= ${SRC:.cpp=.o}

FLAGS	= -Wall -Wextra -Werror -std=c++98

CPP		= g++

ICL		= phonebook.hpp

all :	${NAME}

${NAME}: ${OBJ}
		@${CPP} ${FLAGS} ${OBJ} -o ${NAME}
		@echo "\033[1;32mSucess\033[0m"
		
clean :
		@rm ${OBJ}
		@echo "\033[1;36mObjects Cleared\033[0m"

fclean : clean
		@rm ${NAME}
		@echo "\033[1;34mCleared\033[0m"

re : fclean all

.PHONY: all clean fclean re