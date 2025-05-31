all:
	gcc -o swap swap.c
	gcc -E swap.c > swap.i 
	gcc -S -masm=intel swap.i
	as -o swap.o swap.s
	objdump -M intel -d swap.o > swap.dump