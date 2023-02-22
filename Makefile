# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yothmani <yothmani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 13:17:11 by yothmani          #+#    #+#              #
#    Updated: 2023/02/21 11:26:06 by yothmani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# NAME = libft.a
# SOURCE = ft_isalpha.c\
# 		 ft_isalnum.c \
# 		 ft_isdigit.c \
# 		 ft_isalnum.c \
# 		 ft_isprint.c \
# 		 ft_isascii.c \
# 		 ft_strlen.c \
# 		 ft_memset.c \
# 		 ft_bzero.c \
# 		 ft_memcpy.c \
# 		 ft_memmove.c \
# 		 ft_strlcpy.c \
# 		 ft_strlcat.c \
# 		 ft_toupper.c \
# 		 ft_tolower.c \
# 		 ft_strchr.c \
# 		 ft_strrchr.c \
# 		 ft_strncmp.c \
# 		 ft_memchr.c \
# 		 ft_memcmp.c \
# 		 ft_strnstr.c \
# 		 ft_atoi.c \
# 		 ft_calloc.c \
# 		 ft_strdup.c \
# 		 ft_substr.c \
# 		 ft_strjoin.c \
# 		 ft_strtrim.c \    
# 		 ft_split.c \    
# 		 ft_itoa.c \       
# 		 ft_strmapi.c \     
# 		 ft_striteri.c \
# 		 ft_putchar_fd.c \
# 		 ft_putstr_fd.c \
# 		 ft_putendl_fd.c \
# 		 ft_putnbr_fd.c \

# OBJS = $(SOURCE:.c=.o)

# all: $(NAME)

# %.o : %.c
# 	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	
# $(NAME): $(OBJS)
# 	ar rc $(NAME) $(OBJS)
# 	ranlib $(NAME)
	
# clean:
# 	rm -f $(OBJS)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

NAME		=	libft.a

SRCS		= 	ft_strlen.c ft_memset.c ft_bzero.c ft_isalnum.c ft_isalpha.c\
ft_isdigit.c ft_isprint.c ft_memcpy.c ft_toupper.c ft_tolower.c ft_memccpy.c\
ft_memmove.c ft_memchr.c ft_memcmp.c ft_strncmp.c ft_strrchr.c ft_strlcpy.c\
ft_strlcat.c ft_atoi.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_split.c ft_putnbr_fd.c ft_strmapi.c\
ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
ft_putnbr_fd.c ft_strmapi.c  ft_strchr.c ft_isascii.c\


BONS		=	ft_lstmap_bonus.c ft_lstiter_bonus.c ft_lstclear_bonus.c\
ft_lstdelone_bonus.c ft_lstadd_back_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstnew_bonus.c\

GCC			=	@gcc -Wall -Wextra -Werror

OBJS		=	$(SRCS:.c=.o)

BONSOBJ		=	$(BONS:.c=.o)

INCLUDES	=	./

all: $(NAME)

$(NAME):	$(SRCS) libft.h
		$(GCC) -I$(INCLUDES) -c $(SRCS)
		-@ar rc $(NAME) $(OBJS)
		-@ranlib $(NAME)
bonus:		$(BONS) $(SRCS) libft.h
		$(GCC) -I$(INCLUDES) -c $(BONS)	$(SRCS)
		-@ar rc $(NAME) $(BONSOBJ) $(OBJS)
		-@ranlib $(NAME)
clean:  
			-@$(RM) $(OBJS)	$(BONSOBJ)
fclean:     clean
			-@$(RM) $(NAME)
re:			fclean all

.PHONY:		all clean fclean re bonus