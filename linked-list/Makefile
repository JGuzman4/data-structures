main: main.o list.o
	g++ -o main main.o list.o -lgmp

main.o: main.cpp list.h
	g++ -g -c -std=c++11 main.cpp -lgmp

list.o: list.cpp list.h
	g++ -g -c -std=c++11 list.cpp -lgmp

clean:
	rm -rf main *.o
