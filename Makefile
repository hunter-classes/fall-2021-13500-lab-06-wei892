main: main.o funcs.o test-ascii.o caesar.o decipher.o vigenere.o 
	g++ -o main main.o funcs.o test-ascii.o caesar.o decipher.o vigenere.o 

tests: tests.o funcs.o test-ascii.o
	g++ -o tests tests.o funcs.o ascii.o



funcs.o: funcs.cpp funcs.h

test-ascii.o: test-ascii.cpp test-ascii.h

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

caesar.o: caesar.cpp caesar.h

decipher.o: decipher.cpp decipher.h

vigenere.o: vigenere.cpp vigenere.h

clean:
	rm -f main.o funcs.o tests.o
