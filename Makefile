all: main

main: main.o
	gcc main.o -o main

main.o: main.c
	gcc -c main.c 

clean:
	rm -rf *.o main