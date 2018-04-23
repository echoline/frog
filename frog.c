#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int
main (int argc, char **argv)
{
	double angle;
	double dist;
	double x;
	double y;
	int i;
	int jumps;

	if (argc != 2)
		return -1;

	jumps = atoi (argv[1]);

	while (1)
	{
		x = y = 0.0;

		for (i = 0; i != jumps; i++)
		{
			angle = ((double)arc4random_uniform(RAND_MAX) / RAND_MAX) * 2.0 * M_PI;
			dist = (double)arc4random_uniform(RAND_MAX) / RAND_MAX;

			x += cos (angle) * dist;
			y += sin (angle) * dist;
		}

		printf ("%f\n", sqrt (x*x + y*y));
	}
}
