output: 
	pessoa.o main.o
	g++ pessoa.o main.o -o output


pessoa.o: pessoa.cpp
	g++ -c pessoa.cpp

main.o: main.cpp
	g++ -c main.cpp

target: dependencies
	action

clean:
	rm -rf *.o

compile:
	g++ -o  teste main.cpp pessoa.cpp
