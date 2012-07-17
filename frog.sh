#!/bin/sh

i=1

while true; do
	echo -n "$i ";
	./frog $i | ./acc | ./change;
	i=`expr $i + 1`;
done
