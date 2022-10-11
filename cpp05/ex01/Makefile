NAME= Bureaucrat01
SRCS= main.cpp bureaucrat.cpp Form.cpp
HEADER= bureaucrat.hpp Form.hpp
OBJS=$(SRCS:.cpp=.o)
COMPIL= c++
FLAGS= -std=c++98 -Wall -Wextra -Werror

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
