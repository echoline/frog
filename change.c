#include <stdio.h>

int
main (int argc, char **argv)
{
	double dist, last = 0.0;
	unsigned char count = 0;

	while (scanf ("%lf", &dist))
	{
		if (dist == last)
			count++;
		else
			count = 0;

		if (count == 50)
			break;

		last = dist;
	}

	printf ("%f\n", dist);
}
