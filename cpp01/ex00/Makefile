SRC:= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ:= ${SRC:.cpp=.o}
TARGET:= zombie00
OPT_98:= -Wall -Wextra -WErreur --std=c++98
HEADER:= Zombie.hpp

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

