all:
	gcc -o posNegZero posNegZero.c
	gcc -E posNegZero.c > posNegZero.i 
	gcc -S -masm=intel posNegZero.i
	as -o posNegZero.o posNegZero.s
	objdump -M intel -d posNegZero.o > posNegZero.dump