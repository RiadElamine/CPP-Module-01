NAME = tests

SOURCE = main.cpp\

OBJECT = $(SOURCE:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OBJECT)
	c++ $(CFLAGS) $(OBJECT) -o $(NAME)

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all