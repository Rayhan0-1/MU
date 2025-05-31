all:
	gcc -o mulTable mulTable.c
	gcc -E mulTable.c > mulTable.i 
	gcc -S -masm=intel mulTable.i
	as -o mulTable.o mulTable.s
	objdump -M intel -d mulTable.o > mulTable.dump