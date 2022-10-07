NAME= ex00
SRCS= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp
HEADER= Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp
OBJS=$(SRCS:.cpp=.o)
COMPIL= c++
FLAGS= -std=c++98 -Wall -Wextra -WErreur



%.o:	%.cpp
	$(COMPIL) $(FLAGS) -c $< -o $@
all:	$(NAME)

$(NAME):	$(OBJS) $(HEADER)
	$(COMPIL) $(FLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
