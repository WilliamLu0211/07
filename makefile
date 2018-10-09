all: driver.o ll.o
	gcc driver.o ll.o

driver.o: driver.c ll.h
	gcc -c driver.c

ll.o: ll.c ll.h
	gcc -c ll.c

run:
	./a.out

clean:
	rm *.o
