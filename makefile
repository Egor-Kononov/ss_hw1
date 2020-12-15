CC = gcc
FLAGS = -Wall -g
LIBOBJECTS = basicMath.o power.o myMath.h

all:mains maind  

mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

maind:main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so

mymathd: libmyMath.a

mymaths: libmyMath.so


libmyMath.a: main.o $(LIBOBJECTS)
	ar -rcs libmyMath.a $(LIBOBJECTS)

libmyMath.so:$(LIBOBJECTS) main.o
	$(CC) -shared -o libmyMath.so $(LIBOBJECTS)

main.o:main.c myMath.h
	$(CC) $(FLAGS) -c main.c

basicMath.o:basicMath.c
	$(CC) $(FLAGS)  -c basicMath.c

power.o: power.c
	$(CC) $(FLAGS) -c power.c	




.PHONY:clean all
clean:
	rm -f *.o mains maind libmyMath.a libmyMath.so