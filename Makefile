all: main

main: main.o degree.o
	gcc main.o degree.o -o main

degree.o: degree.c
	gcc -c -g degree.c

main.o: main.c
	gcc -c -g main.c main.h 

dijkstra:
	gcc dijkstra.c -o dijsktra

twoOnN:
	gcc twoOnN.c -o twoOnN

clean:
	rm -rf *.o *.out semantic.cache *.gch  main dijkstra twoOnN

# comentario useless