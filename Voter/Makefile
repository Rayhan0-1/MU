all:
	gcc -o voter voter.c
	gcc -E voter.c > voter.i 
	gcc -S -masm=intel voter.i
	as -o voter.o voter.s
	objdump -M intel -d voter.o > voter.dump