SRC:= tests.cpp Account.cpp
OBJ:= ${SRC:.cpp=.o}
TARGET:= testAccount
OPT_98:= -Wall -Wextra -WErreur --std=c++98
HEAD:=Account.hpp

${TARGET} : ${OBJ} ${HEAD}
	c++ ${OPT_98} -o ${TARGET} ${OBJ}

${OBJ} : %.o : %.cpp
	c++ -c $<

clean :
	rm -rf ${OBJ}

fclean :
	make clean && rm -rf ${TARGET}

re :
	make fclean && make

