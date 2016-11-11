#
# Makefile for hexdump programming coursework
#
myhexdump: print.o hexdump.o
	gcc -o myhexdump hexdump.o print.o

print.o: print.c print.h
	gcc -c -o print.o print.c

clean:
	rm print.o
