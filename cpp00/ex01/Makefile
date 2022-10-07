SRC:= Contact.cpp main.cpp PhoneBook.cpp
OBJ:= ${SRC:.cpp=.o}
TARGET:= MyPhoneBook
OPT_98:= -Wall -Wextra -WErreur --std=c++98
HEADER:= Contact.hpp PhoneBook.hpp

${TARGET} : ${OBJ} ${HEADER}
	c++ ${OPT_98} -o ${TARGET} ${OBJ}

${OBJ} : %.o : %.cpp
	c++ -c $<

clean :
	rm -rf ${OBJ}

fclean :
	make clean && rm -rf ${TARGET}

re :
	make fclean && make

