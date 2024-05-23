CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = interface

SOURCES = main.cpp \
		  Materia.cpp \
		  Character.cpp \
		  Ice.cpp \
		  Cure.cpp

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
