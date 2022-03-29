# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 10:02:45 by fpedraza          #+#    #+#              #
#    Updated: 2022/03/24 15:07:35 by fpedraza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Variables
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
CC = gcc
CC_FLAGS = -Wall -Werror -Wextra -I
RM_RF = rm -rfv
NAME = libft.a

# Objectives
all: $(NAME)
$(NAME):	$(OBJS)
			ar crs $(NAME) $(OBJS)
clean:
			$(RM_RF) $(OBJS)
fclean:		clean
			$(RM_RF) $(NAME)
re:			fclean all

so:
			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
			gcc -nostartfiles -shared -o libft.so $(OBJ)
.PHONY:		all clean fclean re
