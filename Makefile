all: main

main: main.o degree.o dsatur.o interchange.o
	gcc main.o degree.o dsatur.o interchange.o -o main

degree.o: degree.c
	gcc -c -g degree.c

main.o: main.c
	gcc -c -g main.c main.h 

dsatur.o: dsatur.c
	gcc -c -g dsatur.c

interchange.o: interchange.c
	gcc -c -g interchange.c

dijkstra:
	gcc dijkstra.c -o dijsktra

twoOnN:
	gcc twoOnN.c -c -o twoOnN

clean:
	rm -rf *.o *.out semantic.cache *.gch  main dijkstra twoOnN

# comentario useless