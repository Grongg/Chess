CXX 	=	clang++

RM		=	rm -rv

SRCS	=	src/main.cpp	\
			src/pieces.cpp

OBJS	=	$(SRCS:.cpp=.o)

CXXFLAGS	+=	-Iinclude  -std=c++11 -Wall -Wextra #-lsfml-graphic -lsfml-system #-Werror

NAME	=	chess.exe

all: $(NAME)

$(NAME): $(OBJS) 
	$(CXX) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re