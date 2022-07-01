#include <stdio.h>

/**
 * main -entry point
 *
 * Return: 0 sucess
 */

int main(void)
{
	char jaa;

	for (jaa = 'z'; jaa >= 'a'; jaa--)
		putchar(jaa);
	putchar('\n');
	return (0);
}
