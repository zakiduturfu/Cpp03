# Variables

NAME	=	FragTrap
PROJECT =	Cpp03 - Ex01
CC		=	c++
FLAG	=	-Wall -Wextra -Werror -std=c++98 -g3

SRC_DIR	=	src/
OBJ_DIR =	obj/
INCLUDE	=	-I./include


# Sources

FILES	=	main.cpp ClapTrap.cpp
###

OBJF	=	.cache_exists

$(OBJF)	:
	@mkdir -p $(OBJ_DIR)

all		:	$(NAME)

$(NAME)	:	$(FILES) ClapTrap.hpp ./Makefile
	$(CC) $(FLAG) $(FILES) -o $(NAME)

clean	:
	@rm -rf $(OBJ_DIR)
	@$(RM) -f $(OBJF)

fclean	:	clean
	@rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re