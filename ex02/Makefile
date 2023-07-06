# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ageels <ageels@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2023/06/06 15:41:36 by ageels        #+#    #+#                  #
#    Updated: 2023/07/06 21:13:35 by ageels        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Array

FLAGS = -I. -Wall -Werror -Wextra -std=c++98 #-fsanitize=address

HDR = Array.hpp \
	Array.tpp \
	Test.hpp

SRC = main.cpp \
	Test.cpp

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
