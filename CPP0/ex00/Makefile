# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kneves <kneves@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/07 01:01:30 by kneves            #+#    #+#              #
#    Updated: 2024/07/07 01:01:39 by kneves           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -Wall -Wextra -Werror
TARGET = megaphone
SRCS = megaphone.cpp
USER = kneves
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

credit:
	@echo "Made by: $(USER)"

.PHONY: all clean fclean re