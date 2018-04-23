#!/bin/sh

i=${@:-1}

while true; do
	echo -en "$i\t";
	{ ./frog $i & ./frog $i & ./frog $i & ./frog $i & ./frog $i & ./frog $i; } | ./acc | ./change;
	i=`expr $i + 1`;
done
