CPP=c++
CPPFLAGS= -Wall -Werror -Wextra -std=c++98
NAME=crappy
RM=rm -f

SRC= phonebook.cpp main.cpp contact.cpp
OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

%.o:%.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re:fclean all