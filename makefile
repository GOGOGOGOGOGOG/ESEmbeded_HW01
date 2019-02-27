CC = gcc
CFLAGS = -Wall -std=c11

all: main.elf

main.elf: main.c
	$(CC) $(CFLAGS) main.c -o main.elf
test : main.c
	gcc  main.c -o main 
	./main
clean:
	rm -f *.o *.elf
