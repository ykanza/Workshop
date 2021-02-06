##
## EPITECH PROJECT, 2021
## Workshop
## File description:
## Makefile
##

NAME		=	tek1

TNAME		=	unit_tests

MAIN		=	./src/main.c

SRC			=	./src/tool.c

TSRC		=	./tests/tests.c

OBJ			=	$(SRC:.c=.o) $(MAIN:.c=.o)

CFLAGS		+=	-I ./includes

LDFLAGS 	+=	-Wall -Wextra

TESTFLAGS	=	--coverage -lcriterion

RM			=	rm -f

CC			=	gcc


all:		$(NAME)

$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ)

tests_run:	fclean
	@$(CC) -o $(TNAME) $(SRC) $(CFLAGS) $(TSRC) $(TESTFLAGS)
	@./$(TNAME)
	@gcovr

clean:
	@$(RM) $(NAME)
	@$(RM) $(TNAME)

fclean:		clean
	@$(RM) $(shell find . -name "*~")
	@$(RM) $(shell find . -name "a.out")
	@$(RM) $(shell find . -name "vgcore.*")
	@$(RM) $(shell find . -name "\#*#")
	@$(RM) $(shell find . -name "*.gc*")
	@$(RM) $(NAME)
	@$(RM) $(OBJ)

re:			fclean all

.PHONY:		all	clean fclean re tests_run
