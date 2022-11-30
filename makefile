todo: main.o cola.o helper.o
	g++ -Wall -o exe main.o cola.o helper.o
main.o: main.cpp
	g++ -Wall -c main.cpp
cola.o:
	g++ -Wall -c cola.cpp cola.h
helper.o:
	g++ -Wall -c helper.cpp helper.h
clean:
	rm -f *.o