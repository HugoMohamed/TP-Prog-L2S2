###################################
#  Makefile                       #
#  Auteur : Hugo Mohamed          #
#  Date de création : 03/02/2018  #
###################################

CC = gcc
OPTIONS = -Wall -std=c11 -lm

calculer: main.o utilitaire.o fonctions_std.o fonctions_trigo.o
	$(CC) $(OPTIONS) main.o utilitaire.o fonctions_std.o fonctions_trigo.o -o calculer

%o:%c %h
	$(CC) -o $@ -c $< $(OPTIONS)

clean :
	rm -rf *.o calculer
