SRC:= main.cpp Harl.cpp
OBJ:= ${SRC:.cpp=.o}
TARGET:= harl
OPT_98:= -Wall -Wextra -Werror --std=c++98

${TARGET} : ${OBJ}
	c++ ${OPT_98} -o ${TARGET} ${OBJ}

${OBJ} : %.o : %.cpp
	c++ -c $<

clean :
	rm -rf ${OBJ}

fclean :
	make clean && rm -rf ${TARGET}

re :
	make fclean && make

