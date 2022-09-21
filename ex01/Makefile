SRC:= contact_fct.cpp main.cpp phoneBook_fct.cpp
OBJ:= ${SRC:.cpp=.o}
TARGET:= MyPhoneBook
OPT_98:= -Wall -Wextra -Werror --std=c++98 -g

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

