CXX=g++
CXXFLAGS= -Wall -Werror -Wextra -std=c++98
NAME=crappy
RM=rm -f

SRC= phonebook.cpp main.cpp contact.cpp
OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re:fclean all