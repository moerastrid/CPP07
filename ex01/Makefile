# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ageels <ageels@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2023/06/06 15:41:36 by ageels        #+#    #+#                  #
#    Updated: 2023/06/07 16:47:41 by ageels        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Iter

FLAGS = -I. -Wall -Werror -Wextra -std=c++98

HDR = iter.hpp \
	test.hpp

SRC = main.cpp \
	iter.cpp \
	test.cpp

OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME) : $(OBJ) $(HDR)
	c++ $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR) : 
	mkdir -pv $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.cpp | $(OBJ_DIR)
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -fr $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
