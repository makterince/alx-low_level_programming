#include <stdio.h>
/**
 *main - prints figures of fibonacci
 *Return:0 success
 *
 */
int main(void)
{
	int i;
	long int n1, n2, kn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (i = 0; i < 48; i++)
	{
		kn = n1 + n2;
		printf(", %ld", kn);
		n1 = n2;
		n2 = kn;
	}
	printf("\n");
	return (0);
}
