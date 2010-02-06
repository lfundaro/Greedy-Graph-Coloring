oall: main

main: main.o
	gcc main.o -o main

main.o: main.c
	gcc -c main.c 

dijkstra:
	gcc dijkstra.c -o dijsktra

twoOnN:
	gcc twoOnN.c -o twoOnN

clean:
	rm -rf *.o *.out main dijkstra twoOnN