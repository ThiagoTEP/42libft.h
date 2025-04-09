# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 15:41:50 by thevaris          #+#    #+#              #
#    Updated: 2025/04/09 16:39:32 by thevaris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC= cc
FLAG= -Wall -Werror -Wextra -Iincludes
OBJ= $(SRC:.c=.o)
SRC = ft_isalpha.c\
			
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

