##
## EPITECH PROJECT, 2019
## makefile
## File description:
## c le makefile
##

SRC    =  compiles/my_rev_putnbr.c	\
		  compiles/manage_tower.c	\
		  compiles/create_tower.c	\
		  compiles/my_defender.c	\
		  compiles/create_mob.c	\
		  compiles/manage_mob.c	\
		  compiles/castle.c	\
		  compiles/divers.c	\
		  compiles/mouse2.c	\
		  compiles/image.c	\
		  compiles/flags.c	\
		  compiles/mouse.c	\
		  compiles/draw.c	\
		  compiles/vect.c	\
		  compiles/coin.c	\
		  compiles/mobs.c

NAME    = my_defender

all: $(NAME)

$(NAME):
	gcc $(SRC) -o $(NAME) -lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

clean:
	rm -rf *~ \#*\# .\#*

fclean: clean
	rm -rf $(NAME)

re: fclean all clean