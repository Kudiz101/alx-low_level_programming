#include "main.h"

/**
 * print_most_numbers - prints integers, from 0 to 9, followed by a new line.
 *  Description: Ecludes 2 and 4
 * Return: Int 0 through 9
 */

void print_most_numbers(void)

{
	int c;
	for (c = 48; c < 58; c++)
		{
			if (c != 50)
			{
				if (c != 52)
				{
					_putchar(c);
				}
			}
		}
	_putchar('\n');
}
