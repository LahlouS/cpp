NAME= cpp02Ex02
SRCS= main.cpp Fixed.cpp
HEADER= Fixed.hpp
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
