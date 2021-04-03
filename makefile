ABC.exe:main.o big.o fact.o rev1.o
	gcc -o ABC.exe main.o big.o fact.o rev1.o
main.o:main.c
	gcc -c main.c
big.o:big.c
	gcc -c big.c
fact.o:fact.c
	gcc -c fact.c
rev1.o:rev1.c
	gcc -c rev1.c
