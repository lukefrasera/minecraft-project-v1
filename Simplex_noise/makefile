noise.out :	noise.o driver.o
	g++ -o noise.out noise.o driver.o

noise.o :	noise.cpp noise.h
	g++ -c noise.cpp

driver.o :	driver.cpp noise.h noise.cpp
	g++ -c driver.cpp

clean :
	rm *.o 
