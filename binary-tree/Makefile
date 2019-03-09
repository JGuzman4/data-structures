main: main.o btree.o
	g++ -o main main.o btree.o -lgmp

main.o: main.cpp btree.h
	g++ -g -c -std=c++11 main.cpp -lgmp

btree.o: btree.cpp btree.h
	g++ -g -c -std=c++11 btree.cpp -lgmp

clean:
	rm -rf main *.o

