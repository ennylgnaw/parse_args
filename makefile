all: main.o
	gcc -o a.out main.o

main.o: main.c
	gcc -c main.c

run:
	./a.out

clean:
	rm a.out
	rm *.o

