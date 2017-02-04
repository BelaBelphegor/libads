# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiboitel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 16:28:46 by tiboitel          #+#    #+#              #
#    Updated: 2017/02/04 18:29:40 by tiboitel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libads.a
INCLUDES	=	./includes
SRCS		=	math/ads_rand.c \
				datastructure/ads_linked_node.c
SRCSPATH	=	./srcs/
CC 			=	clang
CCFLAGS		=	-Wall -Werror -Wextra -O3
INCLUDES_O	=	-I $(INCLUDES)
INCLUDES_C	=	$(CFLAGS)
SRC			= 	$(addprefix $(SRCSPATH), $(SRCS))
OBJS		=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	echo $(SRCS)
	$(CC) $(CCFLAGS) -c $< -o $@ $(INCLUDES_O)

clean:
	rm -f $(OBJS)

fclean: 	clean
	rm -f $(NAME)

re: 		fclean all

.PHONY: all clean fclean re
