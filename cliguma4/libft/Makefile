# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cliguma <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/06 21:51:58 by cliguma           #+#    #+#              #
#    Updated: 2018/06/13 00:23:02 by cliguma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra
SRC	= 		ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_strdup.c \
			ft_strcpy.c \
			ft_strncpy.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_memalloc.c \
			ft_memdel.c \
			ft_strnew.c \
			ft_strdel.c \
			ft_strclr.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putendl.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_strtrim.c \
			ft_strsplit.c \
			ft_wordcount.c \
			ft_space.c \
			ft_itoa.c \
			ft_putnbr.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstadd.c \
			ft_putnbr_fd.c \
			ft_strncat.c \
			ft_strlcat.c \
			ft_strlenc.c \
			ft_lstnew.c \

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :  $(OBJ)
	@echo "\033[34;1mobject files created successfully\033[34;0m"
	@echo "\033[32;1mcreating libft.a\033[32;0m"
	@gcc $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ) 
	@echo "\033[46;1mfiles have been archived\033[46;0m"
	@ranlib $(NAME)
	@echo "\033[36;1mlibrary has been indexed\033[36;0m"
	@echo "\033[32;1mDONE!\033[32;0m"

clean :
	@rm -rf $(OBJ)
	@echo "\033[31;1mobject files removed successfully\033[31;0m"

fclean : clean
	@rm -rf $(NAME)
	@echo "\033[31;1mlibft.a removed successfully\033[31;0m"

re : fclean all
