NAME = PmergeMe
CPP = c++
CPPFLAGSS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp PmergeMe.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f 
all:$(NAME)
$(NAME):$(OBJ)
	$(CPP) $(CPPFLAGSS) -o $(NAME) $(OBJ)

%.o:%.cpp PmergeMe.hpp
	$(CPP) $(CPPFLAGSS) -c $< -o $@
clean:
	$(RM) $(OBJ)
fclean:clean
	$(RM) $(NAME)
re:fclean all