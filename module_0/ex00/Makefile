NAME	=	megaphone
CC		=	g++
FILES	=	megaphone
OBJ 	=	$(FILES:%=%.o)
SRC		=	$(FILES:%=%.cpp)
CFLAGS	=	-Wall -Wextra -Werror

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
