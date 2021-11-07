# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 10:36:02 by obouadel          #+#    #+#              #
#    Updated: 2021/11/07 11:56:49 by obouadel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
AR= ar rcs
RM =rm  -rf
FILES=  ft_isdigit ft_memset ft_strjoin ft_isprint\
    ft_putchar_fd ft_strlcat ft_substr ft_atoi ft_itoa ft_putendl_fd\
    ft_strlcpy ft_tolower ft_bzero ft_putnbr_fd ft_strlen\
    ft_toupper ft_calloc ft_memchr ft_putstr_fd ft_strmapi ft_isalnum\
    ft_memcmp ft_strncmp ft_isalpha ft_memcpy ft_strchr\
    ft_strnstr ft_isascii ft_memmove ft_strdup ft_strrchr\
    ft_strtrim ft_striteri ft_split
SRC = $(FILES:=.c)
OBJ= $(FILES:=.o)
NAME =libft.a

.PHONY:all clean fclean re

all:$(NAME)

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o : %.c
	$(CC) $(FLAGS) -c $? -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all