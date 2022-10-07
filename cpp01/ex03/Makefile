SRC:= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ:= ${SRC:.cpp=.o}
TARGET:= Weapon
OPT_98:= -Wall -Wextra -WErreur --std=c++98
HEADERS:= HumanA.hpp HumanB.hpp Weapon.hpp

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

