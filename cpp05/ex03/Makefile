NAME= Intern
SRCS= main.cpp bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotoMyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
HEADER= bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotoMyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
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
