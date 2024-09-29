# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 19:04:39 by aursuare          #+#    #+#              #
#    Updated: 2024/07/14 19:17:42 by aursuare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
OBJ_DIR = obj
INCL_DIR = includes

SRC_FILES = $(SRC_DIR)/main.c $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_putstr.c $(SRC_DIR)/ft_strcmp.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_swap.c
OBJ_FILE = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))
LIB_OBJ_FILES = $(filter-out $(OBJ_DIR)/main.o, $(OBJ_FILES))

LIB = libft.a

all: $(LIB)

$(LIB): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $@

$(LIB): $(LIB_OBJ_FILES)
	$(AR) rcs $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $$(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
