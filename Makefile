oall: main

main: main.o
	gcc main.o -o main

main.o: main.c
	gcc -c -g main.c main.h 

dijkstra:
	gcc dijkstra.c -o dijsktra

twoOnN:
	gcc twoOnN.c -o twoOnN

clean:
	rm -rf *.o *.out semantic.cache *.gch  main dijkstra twoOnN
