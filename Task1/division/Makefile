all:
	gcc -o div div.c
	gcc -E div.c > div.i 
	gcc -S -masm=intel div.i
	as -o div.o div.s
	objdump -M intel -d div.o > div.dump