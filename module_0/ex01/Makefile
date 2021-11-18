NAME	=	phonebook
CC		=	g++
FILES	=	Main\
			Phonebook\
			Utils
OBJ 	=	$(FILES:%=%.o)
SRC		=	$(FILES:%=%.cpp)
CFLAGS	=	-Wall -Wextra -I . -std=c++98 -pedantic

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
