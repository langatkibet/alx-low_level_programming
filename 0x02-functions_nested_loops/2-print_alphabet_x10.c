#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 * Return : void
 */

void print_alphabet_x10(void)
{
	int x = 1;
	int yell;

	for (x = 1; x <= 10; x++)
	{
		for (yell = 'a'; yell <= 'z'; yell++)
		{
			_putchar(yell);
		}
	_putchar('\n');
	}
}
