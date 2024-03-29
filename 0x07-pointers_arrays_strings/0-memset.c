#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to fill
 * @b: the specific value
 * @n: number of bytes to change
 *
 * Return: new array with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
