main.o: *.cpp *.h
	g++ -c *.cpp

main: main.o
	g++ -o main *.o

run: main
	./main

clean:
	rm *.o main