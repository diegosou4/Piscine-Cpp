# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diegmore <diegmore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 11:35:51 by diegmore          #+#    #+#              #
#    Updated: 2024/07/02 11:41:24 by diegmore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[1;33m
BBLUE = \033[1;34m
NC = \033[0m

NAME = megaphone

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BBLUE)Creating Megaphone...$(NC)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(BBLUE)Megaphone Done ./megaphone for use $(NC)"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Removing object files..$(NC)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(RED)Removing Megaphone..$(NC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

