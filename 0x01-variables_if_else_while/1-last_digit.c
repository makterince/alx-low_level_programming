#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 * main - entry point
 * Return:0 when successful
 */


/* betty style doc for function main goes there */

int main(void)

{

		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n > 5)
			printf(("Last digit of %d\n") n, ("and is greater than
				5%d\n"));
		else if (n == 0)
			printf("Last digit of %d" n, "and is zero\n");
		else if (n < 6 && != 0)
			printf("Last digit of %d" n, "and is less than 6 and not
			0\n");
		return (0);

}
