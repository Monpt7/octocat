##
## Makefile for octocat in /Users/viallo_l/octocat
##
## Made by VIALLON Louis
## Login   <viallo_l@etna-alternance.net>
##
## Started on  Mon Jan 18 14:48:04 2016 VIALLON Louis
## Last update Fri Jan 22 15:38:01 2016 GONNET Laurent
##

CC	= gcc
NAME = octocat
SRC	= main.c \
			affichage.c \
			deplacement.c \
			readline.c \
			move.c \
			position.c \
			casu.c \
			hardcore.c \
			hardDeplacement.c \
			blind.c \
			message.c \
			rejouer.c \
			chooseMap.c \
			moveNR.c \
			noRetDeplacement.c \
			noreturn.c \
			readMap.c
LIB = -L. -lmy

OBJ	= $(SRC:%.c=%.o)
CFLAGS 	= -W -Wall -Wextra -Werror
RM	= rm
$(NAME) :	$(OBJ)
		$(CC) $(CFLAGS) $(SRC) $(LIB) -o $(NAME)
all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)
re:			fclean
			make
