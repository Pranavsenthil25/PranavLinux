all: helloworld datatypes strings

helloworld: helloworld.c
    gcc -Wall helloworld.c -o helloworld

datatypes: datatypes.c
    gcc -Wall datatypes.c -o datatypes

strings: strings.c
    gcc -Wall strings.c -o strings

clean:
    rm -f helloworld datatypes strings
