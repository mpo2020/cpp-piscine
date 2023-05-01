NAME	= SedIsForLosers

SRC		= main.cpp fileManipulation.cpp validation.cpp

OBJ		= ${SRC:.cpp=.o}

FLAGS	= -Wall -Wextra -Werror -std=c++98

CPP		= c++

ICL		= SedIsForLosers.hpp

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

run: re
	@ echo "Ola bom dia\nesse e um material para teste\n" > teste.txt 
	@ ./${NAME} teste.txt "material" bola
	@cat teste.txt.replace
	@rm teste.txt*
	@echo "SUCESS EXE"

.PHONY: all clean fclean re