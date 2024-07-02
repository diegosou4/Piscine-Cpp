
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[1;33m
BBLUE = \033[1;34m
NC = \033[0m

NAME = account

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BBLUE)Creating Account Progam...$(NC)"
	@echo "$(BBLUE)Thank GlobalBanksters United for the opportunity!! $(NC)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Removing object files..$(NC)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(RED)Removing Account..$(NC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re