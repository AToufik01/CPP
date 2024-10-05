NAME = scavtrap
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)
all:$(NAME)
$(NAME):$(OBJ)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

%.o:%.cpp ClapTrap.hpp ScavTrap.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re:fclean all