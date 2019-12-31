# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/12 13:37:44 by sebbaill          #+#    #+#              #
#    Updated: 2019/12/31 00:34:38 by sebbaill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCEC =	ft_atoi.c		\
		ft_bzero.c			\
		ft_calloc.c			\
		ft_count_numbers.c	\
		ft_count_words.c	\
		ft_isalnum.c		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_itoa.c			\
		ft_lstadd_back.c	\
		ft_lstadd_front.c	\
		ft_lstclear.c		\
		ft_lstdelone.c		\
		ft_lstlast.c		\
		ft_lstmap.c			\
		ft_lstnew.c			\
		ft_lstiter.c		\
		ft_lstsize.c		\
		ft_memalloc.c		\
		ft_memccpy.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_memcpy.c			\
		ft_memdel.c			\
		ft_memmove.c		\
		ft_memset.c			\
		ft_putchar.c		\
		ft_putchar_fd.c		\
		ft_putendl.c		\
		ft_putendl_fd.c		\
		ft_putnbr.c			\
		ft_putnbr_fd.c		\
		ft_putstr.c			\
		ft_putstr_fd.c		\
		ft_split.c			\
		ft_strcat.c			\
		ft_strchr.c			\
		ft_strcpy.c			\
		ft_strdup.c			\
		ft_strjoin.c		\
		ft_strlcat.c		\
		ft_strlcpy.c		\
		ft_strlen.c			\
		ft_strmapi.c		\
		ft_strncmp.c		\
		ft_strncpy.c		\
		ft_strnew.c			\
		ft_strnstr.c		\
		ft_strrev.c			\
		ft_strrchr.c		\
		ft_strtrim.c		\
		ft_substr.c			\
		ft_tolower.c		\
		ft_toupper.c

SOURCEO = $(SOURCEC:.c=.o)

all: $(NAME)

$(NAME): $(SOURCEC) $(HEADER)
	$(CC) $(CFLAGS) -c $(SOURCEC)
	ar rcs $(NAME) $(SOURCEO)
	@echo "\033[32mLibft compiled.\033[0m"

clean:
	rm -rf $(SOURCEO)
	@echo "Binary files deleted"

fclean: clean
	rm -rf $(NAME)
	@echo "$(NAME) deleted."

re: fclean all

.PHONY: all clean fclean re
