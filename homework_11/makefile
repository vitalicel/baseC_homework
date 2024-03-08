# Среда, в которой ведется работа - CodeBlocks

all: Debug

Debug: main.o temp_api.o
	gcc -g -pg -std=c99 -o homework_11 main.o temp_api.o

main.o: main.c temp_api.h
	gcc -g -pg -std=c99 -c -o main.o main.c

temp_api.o: temp_api.c
	gcc -g -pg -std=c99 -c -o temp_api.o temp_api.c

cleanDebug:
	del *.o homework_11.exe
