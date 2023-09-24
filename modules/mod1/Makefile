CFLAGS=-Wall

compile:
	gcc $(CFLAGS) main.c -c
	gcc $(CFLAGS) person.c -c
	gcc $(CFLAGS) main.o person.o -o main

clean:
	rm -f *.o
	rm -f main

run: compile
	./main