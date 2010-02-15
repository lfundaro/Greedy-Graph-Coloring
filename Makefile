all: main

main: main.o degree.o dsatur.o dijkstra.o implicit_enum.o interchange.o utilities.o twoOnN.o
	gcc main.o degree.o dsatur.o dijkstra.o interchange.o utilities.o twoOnN.o implicit_enum.o -o main

implicit_enum.o: implicit_enum.c
	gcc -c -g implicit_enum.c

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

dijkstra.o: dijkstra.c
	gcc -c -g dijkstra.c 

clean:
	rm -rf *.o *.out semantic.cache *.gch  main dijkstra twoOnN

# comentario useless