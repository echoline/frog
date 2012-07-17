all: frog acc change

frog: frog.c
	gcc -o frog frog.c -lm

acc: acc.c
	gcc -o acc acc.c

change: change.c
	gcc -o change change.c

clean:
	rm -f frog acc change
