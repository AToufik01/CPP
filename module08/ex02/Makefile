NAME = mutantstack
CPP = c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPPFLAGS) -o  $(NAME) $(OBJ)

%.o:%.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@ 
clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re: fclean all
