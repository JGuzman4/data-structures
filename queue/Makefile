main: main.o queue.o
	g++ -o main main.o queue.o -lgmp

main.o: main.cpp queue.h
	g++ -g -c -std=c++11 main.cpp -lgmp

queue.o: queue.cpp queue.h
	g++ -g -c -std=c++11 queue.cpp -lgmp

clean:
	rm -rf main *.o
