CFLAGS = -Wall -Werror -MP -MMD

all: bin/deposit-calc

bin/deposit-calc: build/deposit-calc.o build/deposit.o
	gcc $(CFLAGS) build/deposit-calc.o build/deposit.o -o bin/deposit-calc 

build/deposit-calc.o: src/deposit-calc.c src/deposit.h
	gcc $(CFLAGS) -c src/deposit-calc.c -o build/deposit-calc.o

build/deposit.o : src/deposit.c src/deposit.h
	gcc $(CFLAGS) -c src/deposit.c -o build/deposit.o

clean:
	rm -rf bin/deposit-calc
	rm -rf build/*
