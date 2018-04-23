#include <stdio.h>

int
main (int argc, char **argv)
{
	double dist, last = 0.0;
	unsigned long long count = 0;

	while (scanf ("%lf", &dist))
	{
		if (dist == last)
			count++;
		else
			count = 0;

		if (count == 64)
			break;

		last = dist;
	}

	printf ("%f\n", dist);
}
