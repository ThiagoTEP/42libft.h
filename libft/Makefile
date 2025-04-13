# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 15:41:50 by thevaris          #+#    #+#              #
#    Updated: 2025/04/13 19:26:57 by thevaris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC= cc
FLAG= -Wall -Werror -Wextra
OBJ= $(SRC:.c=.o)
SRC= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_memset.c ft_strlen.c ft_tolower.c ft_toupper.c ft_bzero.c \
	ft_strlcat.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_strnstr.c ft_atoi.c ft_strdup.c ft_memcpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_calloc.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c \

OBJB= $(SRCB:.c=.o)
SRCB= ft_lstnew.c ft_lstnew.c ft_lstadd_front.c \
	ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
	ft_lstmap.c 

			
AR = ar
RCS = rcs
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(RCS) $(NAME) $(OBJ)

$(OBJ): $(SRC)
	@$(CC) $(FLAGS) -c $(SRC)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

bonus: $(OBJ) $(OBJB)
	@$(AR) $(RCS) $(NAME) $(OBJ) $(OBJB)
