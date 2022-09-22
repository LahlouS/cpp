SRC:= tests.cpp Account.cpp
OBJ:= ${SRC:.cpp=.o}
TARGET:= testAccount
OPT_98:= -Wall -Wextra -Werror --std=c++98 -g
HEAD:=Account.hpp

${TARGET} : ${OBJ} ${HEAD}
	g++ ${OPT_98} -o ${TARGET} ${OBJ}

${OBJ} : %.o : %.cpp
	g++ -c $<

clean :
	rm -rf ${OBJ}

fclean :
	make clean && rm -rf ${TARGET}

re :
	make fclean && make

