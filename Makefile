all: main

main: main.o degree.o dsatur.o dijkstra.o implicit_enum.o interchange.o utilities.o twoOnN.o
	gcc main.o degree.o dsatur.o dijkstra.o interchange.o utilities.o twoOnN.o implicit_enum.o -o main

implicit_enum.o: implicit_enum.c
	gcc -c implicit_enum.c

degree.o: degree.c
	gcc -c degree.c

main.o: main.c
	gcc -c main.c main.h 

dsatur.o: dsatur.c
	gcc -c dsatur.c

interchange.o: interchange.c
	gcc -c interchange.c

twoOnN.o: twoOnN.c
	gcc -c twoOnN.c

utilities.o: utilities.c
	gcc -c utilities.c

dijkstra.o: dijkstra.c
	gcc -c dijkstra.c 

clean:
	rm -rf *.o *.out semantic.cache *.gch  main

clean_backups:
	rm -f *~

