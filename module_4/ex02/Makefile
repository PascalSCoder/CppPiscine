NAME	=	Animals
CC		=	g++
FILES	=	Main\
			Animal\
			Dog\
			Cat\
			Brain
OBJ 	=	$(FILES:%=obj/%.o)
SRC		=	$(FILES:%=%.cpp)
CFLAGS	=	-I . -std=c++98 -fsanitize=address -pedantic -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

obj/%.o: %.cpp
	@mkdir -p obj/
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf obj/

fclean: clean
	rm -f $(NAME)

re: fclean all
