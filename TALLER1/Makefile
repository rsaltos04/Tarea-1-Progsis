programa:main.o datos.o calculos.o
	gcc -o programa main.o datos.o calculos.o

main.o: main.c calculos.h datos.h
	gcc -c main.c

datos.o: datos.c datos.h calculos.h
	gcc -c datos.c

calculos.o: calculos.c calculos.h
	gcc -c calculos.c

clean:
	rm -f programa *.o