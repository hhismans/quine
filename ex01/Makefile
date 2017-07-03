# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhismans <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 15:49:13 by hhismans          #+#    #+#              #
#    Updated: 2017/07/03 15:54:57 by hhismans         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Grace

CC := clang
CFLAGS := -Wall -Wextra -Werror
LFLAGS := 

SRC_FILES := main.c

OBJ_FILES := $(SRC_FILES:.cpp=.o)
INC_FILES := 

SRC_DIR := ./
OBJ_DIR := ./

INC := $(addprefix $(SRC_DIR), $(INC_FILES))
OBJ := $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
	$(CC) $^ -o $@ $(LFLAGS)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INC)
	$(CC) -I$(INC_DIR) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
