#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 * Return : void
 */

void print_alphabet_x10(void)
{
	int yell;

	for (yell = '00:00'; yell <= '23:59'; yell++)
		_putchar(yell);
	_putchar('\n');
}
