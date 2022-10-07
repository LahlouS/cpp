SRC:= main.cpp
OBJ:= ${SRC:.cpp=.o}
TARGET:= mySed
OPT_98:= -Wall -Wextra -WErreur --std=c++98

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

