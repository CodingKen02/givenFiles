
greeting: main.o greeting.o
	g++ main.o greeting.o -o greeting

main.o: main.cpp
	g++ -c main.cpp

greeting.o: greeting.cpp greeting.h
	g++ -c greeting.cpp

clean:
	rm *.o greeting