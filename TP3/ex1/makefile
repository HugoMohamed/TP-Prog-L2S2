CC = gcc
OPTIONS = -Wall

test_liste: test.o allocation.o liste.o pile.o file.o
	$(CC) $(OPTIONS) test.o allocation.o liste.o pile.o file.o -o test_liste
%o:%c %h
	$(CC) -o $@ -c $< $(OPTIONS)

clean:
	rm -rf *.o test_liste test_mail
