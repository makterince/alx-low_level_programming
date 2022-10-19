#include <stdio.h>
/**
 *main - prints all num in fb numbers
 *Return:0 success
 *
 */
int main(void)
{
	long int n1, n2, kn, akn;

	n1 = 1;
	n2 = 2;
	kn = akn = 0;
	while (kn <= 4000000)
	{
		kn = n1 + n2;
		n1 = n2;
		n2 = kn;
		if ((n1 % 2) == 0)
		{
			akn += n1;
		}
	}
	printf("ld\n", akn);
	return (0);
}
