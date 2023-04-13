NAME	= megaphone

SRC		= megaphone.cpp

FLAGS	= -Wall -Wextra -Werror -std=c++98

CPP		= g++

all :
		@${CPP} ${FLAGS} ${SRC} -o ${NAME}
		@echo "Sucess"

fclean :
		@rm ${NAME}
		@echo "Clear"

re : fclean all

.PHONY: all clean fclean re