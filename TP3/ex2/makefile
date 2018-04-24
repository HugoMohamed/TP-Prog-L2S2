CC = gcc
OPTIONS = -Wall

test_mail: listemail.o filemail.o email.o allocation.o test_mail.o
	$(CC) $(OPTIONS) listemail.o filemail.o email.o allocation.o test_mail.o -o test_mail

%o:%c %h
	$(CC) -o $@ -c $< $(OPTIONS)

clean:
	rm -rf *.o test_mail
