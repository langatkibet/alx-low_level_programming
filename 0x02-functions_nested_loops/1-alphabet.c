#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return :  0 Success
 */

void print_alphabet(void)
{
	int yell;

	for (yell = 'a'; yell <= 'z'; yell++)
		putchar(yell);
	putchar('\n');
	return (0);
}
