#include <stdio.h>
/**
 *main - prints all 98 fib numbers
 *Return: 0 success
 *
 */
int main(void)
{
	int c, boolean, boolean2;
	long int n1, n2, kn, kn2, n11, n22;

	n1 = 1;
	n2 = 2;
	boolean = boolean2 = 1;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 96; c++)
	{
		if (boolean)
		{
			kn = n1 + n2;
			printf(", %ld", kn);
			n1 = n2;
			n2 = kn;
		}
		else
		{
			if (boolean)
			{
				n11 = n1 % 1000000000;
				n22 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				boolean2 = 0;
			}
			kn2 = (n11 + n22);
			kn = n1 + n2 + (kn2 / 1000000000);
			printf(", %ld", kn);
			printf("%ld", kn2 % 1000000000);
			n1 = n2;
			n11 = n22;
			n2 = kn;
			n22 = (kn2 % 1000000000);
		}
		if (((n1 + n2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
