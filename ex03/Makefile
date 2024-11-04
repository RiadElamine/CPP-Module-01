NAME = tests

SOURCE = main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp

OBJECT = $(SOURCE:.cpp=.o)

HEARDER = Weapon.hpp\
		HumanA.hpp\
		HumanB.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98
all : $(OBJECT)
	c++ $(CFLAGS) $(OBJECT) -o $(NAME)

%.o: %.cpp $(HEARDER)
	c++ $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all