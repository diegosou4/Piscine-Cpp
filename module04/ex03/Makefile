
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[1;33m
BBLUE = \033[1;34m
NC = \033[0m


NAME = materia
CXX = c++ -g
CXXFLAGS = -std=c++98  -Wall -Wextra -Werror 

SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp MateriaSource.cpp Ice.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BBLUE)Creating Materia $(NC)"
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