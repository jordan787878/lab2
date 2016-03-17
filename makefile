file.out: bmi.o mainbmi.o
	g++ -o file.out bmi.o mainbmi.o

bmi.o: bmi.h bmi.cpp
	g++ -c bmi.cpp

mainbmi.o: bmi.h mainbmi.cpp
	g++ -c mainbmi.cpp

clean:
	rm *bmi*.o
