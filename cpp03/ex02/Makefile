NAME	= fragtrap

SRC		= ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp ./FragTrap.cpp

OBJ		= ${SRC:.cpp=.o}

FLAGS	= -Wall -Wextra -Werror -std=c++98

CPP		= c++

ICL		= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

all :	${NAME}

${NAME}: ${OBJ}
		@${CPP} ${FLAGS} ${SRC} -o ${NAME}
		@echo "\033[1;32mSucess\033[0m"
${OBJ} : ${SRC}
	@${CPP} ${FLAGS} -I ./ -c ${subst .o,.cpp,$@} -o $@ 
		
clean :
		@${RM} ${OBJ}
		@echo "\033[1;36mObjects Cleared\033[0m"

fclean : clean
		@${RM} ${NAME}
		@echo "\033[1;34mCleared\033[0m"

re : fclean all

.PHONY: all clean fclean re