CC = gcc
OPTIONS = -Wall

test_post: test_post.o postfixe.o pile.o liste.o allocation.o
	$(CC) $(OPTIONS) test_post.o postfixe.o pile.o liste.o allocation.o -o test_post

%o: %c %h
	$(CC) -o $@ -c $< $(OPTIONS)

clean:
	rm -rf *.o test_post
