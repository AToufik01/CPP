NAME = btc
CPP =c++
CPPFLGSS =  -Wall -Wextra -Werror -std=c++98
SRC= BitcoinExchange.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f
all :$(NAME)
$(NAME) :$(OBJ)
	$(CPP) $(CPPFLGSS) -o $(NAME) $(OBJ)
%.o:%.cpp BitcoinExchange.hpp
	$(CPP) $(CPPFLGSS) -c $< -o $@
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re:fclean all