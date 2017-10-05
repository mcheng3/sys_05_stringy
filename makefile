all : stringy.o
	gcc -o strtest stringy.o

stringy.o : stringy.c
	gcc -c stringy.c

run : all
	./strtest
