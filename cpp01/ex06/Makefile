CC = c++
CFLAGS = -Wall -Werror -Wextra -std=CC98
NAME = harl_filter

SOURCES = main.cpp \
		  Harl.cpp

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
