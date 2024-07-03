RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[1;33m
BBLUE = \033[1;34m
NC = \033[0m

NAME = Unnecessary_violence

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp HumanB.cpp HumanA.cpp Weapon.cpp 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BBLUE)Creating Unnecessary_violence...$(NC)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Removing object files..$(NC)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(RED)Removing Unnecessary_violence..$(NC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re