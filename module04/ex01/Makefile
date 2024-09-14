
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[1;33m
BBLUE = \033[1;34m
NC = \033[0m


NAME = Brain
CXX = c++
CXXFLAGS = -std=c++98  -Wall -Wextra -Werror -fsanitize=address -g

SRC = main.cpp Brain.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BBLUE)Creating Brain $(NC)"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Removing object files..$(NC)"
	@rm -rf $(OBJ)

fclean: clean
	@echo "$(RED)Removing Progam..$(NC)"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re