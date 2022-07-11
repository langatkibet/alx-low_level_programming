#include "main.h"

/**
 * swap_int - wap two int.
 * @a: variable.
 * @b: variable
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
