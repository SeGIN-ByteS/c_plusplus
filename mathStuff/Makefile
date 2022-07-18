mathstuff: main.o math_utils.o
	g++ main.o math_utils.o -o mathstuff

main.o: main.cpp
	g++ -c main.cpp 

math_utills.o: math_utils.cpp
	g++ -c math_utils.cpp

clean:
	rm *.o mathstuff
