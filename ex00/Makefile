SRC:= megaphone.cpp
OBJ:= ${SRC:.cpp=.o}
TARGET:=megaphone
OPT_98:= -Wall -Wextra -Werror --std=c++98

${TARGET} : ${OBJ}
	g++ ${OPT_98} -o ${TARGET} ${OBJ}

${OBJ} : %.o : %.cpp
	g++ -c $<

clean :
	rm -rf ${OBJ}

fclean :
	make clean && rm -rf ${TARGET}

re :
	make fclean && make

