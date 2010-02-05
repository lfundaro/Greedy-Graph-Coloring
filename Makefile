all: main

main: main.o
	gcc main.o -o main

main.o: main.c
	gcc -c -g main.c main.h 

clean:
	rm -rf *.o *.out semantic.cache main *.gch