all: hellomain.c hellofunc.c hellofunc.h
    gcc -o hello hellomain.c hellofunc.c
clean:
    rm -rf *.o hello
