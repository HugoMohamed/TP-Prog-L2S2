CC = gcc
OPTIONS = -Wall

test_arbre: test_arbre.o arbre.o
	$(CC) $(OPTIONS) test_arbre.o arbre.o -o arbre

%o: %c %h
	$(CC) -o $@ -c $< $(OPTIONS)

clean:
	rm -rf *.o arbre
