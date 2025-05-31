all:
	gcc -o fibonacci fibonacci.c
	gcc -E fibonacci.c > fibonacci.i 
	gcc -S -masm=intel fibonacci.i
	as -o fibonacci.o fibonacci.s
	objdump -M intel -d fibonacci.o > fibonacci.dump