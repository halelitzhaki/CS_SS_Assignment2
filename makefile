all: my_mat.so connections

my_mat: my_mat.so

connections: main.o my_mat.so
	gcc -Wall -g -o connections main.o ./my_mat.so

my_mat.so: my_mat.o my_mat.h
	gcc -shared -o my_mat.so my_mat.o 

main.o: main.c
	gcc -Wall -g -c main.c

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -fPIC -c my_mat.c

.PHONY: clean all

clean:
	rm *.o my_mat.so connections
