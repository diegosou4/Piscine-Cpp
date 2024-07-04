RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[1;33m
BBLUE = \033[1;34m
NC = \033[0m


NAME = Harl
CC = c++
CFLAGS = -std=c++98  -Wall -Wextra -Werror

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BBB)Creating Harl 2.0$(NC)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Removing object files..$(NC)"
	@rm -rf $(OBJ)

fclean: 
	@echo "$(RED)Removing Progam..$(NC)"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re