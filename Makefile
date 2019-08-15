##
## EPITECH PROJECT, 2019
## chest
## File description:
## Makefile
##

CXX 	=	clang++

RM		=	rm -rv

SRCS	=	srcs/main.cpp	\
			srcs/PrepChest.cpp	\
			srcs/piece.cpp

OBJS	=	$(SRCS:.cpp=.o)

CXXFLAGS	+=	-I include  -std=c++11 -Wall -Wextra #-lsfml-graphic -lsfml-system

NAME	=	Game.exe

all: $(NAME)

$(NAME): $(OBJS) 
	$(CXX) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re