main: main.o funcs.o test-ascii.o
	g++ -o main main.o funcs.o test-ascii.o

tests: tests.o funcs.o test-ascii.o
	g++ -o tests tests.o funcs.o ascii.o



funcs.o: funcs.cpp funcs.h

test-ascii.o: test-ascii.cpp test-ascii.h

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f main.o funcs.o tests.o
