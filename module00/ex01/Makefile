NAME=crappy
CPP=c++
CPPFLAGS= -Wall -Werror -Wextra -std=c++98
RM=rm -f

SRC= PhoneBook.cpp main.cpp Contact.cpp
OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

%.o:%.cpp Contact.hpp PhoneBook.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re:fclean all