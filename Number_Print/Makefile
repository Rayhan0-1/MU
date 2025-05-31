all:
	gcc -o numberPrint numberPrint.c
	gcc -E numberPrint.c > numberPrint.i 
	gcc -S -masm=intel numberPrint.i
	as -o numberPrint.o numberPrint.s
	objdump -M intel -d numberPrint.o > numberPrint.dump