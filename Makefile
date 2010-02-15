all: main

main: main.o degree.o dsatur.o interchange.o utilities.o twoOnN.o
	gcc main.o degree.o dsatur.o interchange.o utilities.o twoOnN.o -o main

degree.o: degree.c
	gcc -c -g degree.c

main.o: main.c
	gcc -c -g main.c main.h 

dsatur.o: dsatur.c
	gcc -c -g dsatur.c

interchange.o: interchange.c
	gcc -c -g interchange.c

twoOnN.o: twoOnN.c
	gcc -c -g twoOnN.c

utilities.o: utilities.c
	gcc -c -g utilities.c

dijkstra:
	gcc dijkstra.c -o dijsktra

clean:
	rm -rf *.o *.out semantic.cache *.gch  main

clean_backups:
	rm -f *~

# comentario useless