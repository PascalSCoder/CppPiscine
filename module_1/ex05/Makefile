NAME	=	Karen
CC		=	g++
FILES	=	Karen\
			Main
OBJ 	=	$(FILES:%=%.o)
SRC		=	$(FILES:%=%.cpp)
CFLAGS	=	-I . -std=c++98 -pedantic -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
