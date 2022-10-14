#include <unistd.h>
/**
 *main- this is the entry point for the program
 *Return:1 if the function leads to an error, return not 1 if no error
 */
int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, err, 59);
	return (1);
}
