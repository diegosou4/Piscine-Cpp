# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diegmore <diegmore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/21 11:08:40 by diegmore          #+#    #+#              #
#    Updated: 2024/07/02 11:36:44 by diegmore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[1;33m
BBLUE = \033[1;34m
NC = \033[0m

NAME = phonebook

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = Contact.cpp Phonebook.cpp 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BBLUE)Creating Phonebook...$(NC)"
	@$(CC) $(CFLAGS) phone.cpp $(OBJ) -o $(NAME)
	@echo "$(BBLUE)Phonebook Done ./phonebook for use $(NC)"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Removing object files..$(NC)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(RED)Removing Phonebook..$(NC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

