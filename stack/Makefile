main: main.o stack.o
	g++ -o main main.o stack.o -lgmp

main.o: main.cpp stack.h
	g++ -g -c -std=c++11 main.cpp -lgmp

stack.o: stack.cpp stack.h
	g++ -g -c -std=c++11 stack.cpp -lgmp

clean:
	rm -rf main *.o
