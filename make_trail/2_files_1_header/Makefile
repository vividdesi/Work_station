
#CFLAGS = -Wall -g
#OBJECTS = file1.o file2.o

all: file12 file2

file12:file1.c header_file.h
	${CC} -I. file1.c -o file1execute

file2: file2.c header_file.h
	${CC}  -I. file2.c -o file2execute 

clean:
	rm -f *.o file1execute file2execute file1




