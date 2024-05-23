CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = animals

SOURCES = main.cpp \
		  Animal.cpp \
		  Cat.cpp \
		  Dog.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re:	fclean all
