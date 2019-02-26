CFLAGS = -O0 -Wall -Werror -g

# Control the build verbosity                                                   
ifeq ("$(VERBOSE)","1")
    Q :=
    VECHO = @true
else
    Q := @
    VECHO = @printf
endif
all: main
test : main.c
	gcc -Wall main.c -o main -lm
	./main
clean	:
	rm -f *.o	main
	rm -f *.exe	main
.PHONY: all clean
