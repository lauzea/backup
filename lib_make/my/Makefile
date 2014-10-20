##
## Makefile for Makefile in /home/lauze_a/rendu/Piscine_C_J11/lib/my
## 
## Made by lauze_a lauze_a
## Login   <lauze_a@epitech.net>
## 
## Started on  Mon Oct 20 09:06:13 2014 lauze_a lauze_a
## Last update Mon Oct 20 15:44:51 2014 lauze_a lauze_a
##

SRC=		my_aff_alpha.c \
		my_aff_chiffre.c \
		my_aff_comb2.c \
		my_aff_comb.c \
		my_aff_revalpha.c \
		my_evil_str.c \
		my_factorielle_it.c \
		my_factorielle_rec.c \
		my_find_prime_sup.c \
		my_getnbr.c \
		my_isneg.c \
		my_is_prime.c \
		my_power_it.c \
		my_power_rec.c \
		my_putchar.c \
		my_put_nbr.c \
		my_putstr.c \
		my_revstr.c \
		my_showmen.c \
		my_showstr.c \
		my_sort_in_tab.c \
		my_square_root.c \
		my_strcat.c \
		my_strcmp.c \
		my_strcpy.c \
		my_str_isalpha.c \
		my_str_islower.c \
		my_str_isnum.c \
		my_str_isprintable.c \
		my_str_isupper.c \
		my_strlcat.c \
		my_strlen.c \
		my_strlowcase.c \
		my_strncat.c \
		my_strncmp.c \
		my_strncpy.c \
		my_strstr.c \
		my_strupcase.c \
		my_swap.c

NAME=		libmy.a

OBJ=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc libmy.a $(OBJ)
		ranlib libmy.a
		cp libmy.a ../
		cp my.h ../../include/

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f ../libmy.a

re:		fclean all
