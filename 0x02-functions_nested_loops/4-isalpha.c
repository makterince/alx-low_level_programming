#include "main.h"
/**
 *_isalpha - checks for c in big or small letter
 *@c:charachter
 *Return:1 success return:0 failed
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
