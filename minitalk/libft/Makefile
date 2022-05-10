# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-khar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 20:41:48 by mel-khar          #+#    #+#              #
#    Updated: 2021/11/15 23:56:18 by mel-khar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
	ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c\
	ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c\
	ft_toupper.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

BONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)
CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
all : $(NAME)
$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)
%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<
bonus : $(BONUS_OBJ) $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ar -rc $(NAME) $(BONUS_OBJ)
clean :
	$(RM) $(OBJ) $(BONUS_OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
