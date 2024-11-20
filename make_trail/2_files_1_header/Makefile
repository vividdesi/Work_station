
CFLAGS = -Wall -g
OBJECTS = file1.o file2.o

all: file1.o file2.o

file1.o:file1.c header_file.h
	${CC}  $(CFLAGS) -c file1.c

file2.o: file2.c header_file.h
	${CC} $(CFLAGS)  -c file2.c 

clean:
	rm -f *.o 




