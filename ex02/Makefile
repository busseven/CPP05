# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: busseven <busseven@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/06 18:33:37 by busseven          #+#    #+#              #
#    Updated: 2026/01/15 13:32:35 by busseven         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp main.cpp
CC = c++
CXX = c++
OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = test

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

fclean: clean
	rm -rf $(NAME)

clean:
	rm -f $(OBJS)

re: fclean all

.PHONY: all clean fclean re