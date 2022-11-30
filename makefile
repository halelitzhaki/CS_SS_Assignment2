connections: main.o my_mat.a
	gcc -o connections main.o my_mat.a

my_mat.a: my_mat.o my_mat.h
	ar -rcs my_mat.a my_mat.o 

main.o: main.c my_mat.h
	gcc -c main.c

my_mat.o: my_mat.c my_mat.h
	gcc -c my_mat.c

clean:
	rm *.o my_mat.a connections
