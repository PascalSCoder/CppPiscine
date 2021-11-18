NAME	=	Traps
CC		=	g++
FILES	=	Main\
			ClapTrap
OBJ 	=	$(FILES:%=%.o)
SRC		=	$(FILES:%=%.cpp)
CFLAGS	=	-I . -std=c++98 -pedantic -Wall -Wextra

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
