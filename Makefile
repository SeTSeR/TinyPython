all:	input.o main.o
	g++ input.o main.o -o interpreter

clean:
	rm *.o

input.o:
	g++ -c input.cxx -o input.o

main.o:
	g++ -c main.cxx -o main.o
