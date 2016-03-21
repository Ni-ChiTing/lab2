A: A.o a.o
	g++ -o A A.cpp

A.o: A.cpp a.o
	g++ -c A.cpp

a.o: a.h
	g++ -c a.h

clean:
	rm a.o
	rm A.o
