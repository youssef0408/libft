# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yothmani <yothmani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 13:17:11 by yothmani          #+#    #+#              #
#    Updated: 2023/02/18 16:10:22 by yothmani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SOURCE = ft_isalpha.c\
		 ft_isalnum.c \
		 ft_isdigit.c \
		 ft_isalnum.c \
		 ft_isprint.c \
		 ft_isascii.c \
		 ft_strlen.c \
		 ft_memset.c \
		 ft_bzero.c \
		 ft_memcpy.c \
		 ft_memmove.c \
		 ft_strlcpy.c \
		 ft_strlcat.c \
		 ft_toupper.c \
		 ft_tolower.c \
		 ft_strchr.c \
		 ft_strrchr.c \
		 ft_strncmp.c \
		 ft_memchr.c \
		 ft_memcmp.c \
		 ft_strnstr.c \
		 ft_atoi.c \
		 ft_calloc.c \
		 ft_strdup.c \

OBJS = $(SOURCE:.c=.o)

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
