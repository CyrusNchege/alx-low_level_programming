#include "main.h"
/**
 * swap_int - swaps the values of a and b
 * @a: pointer 2 param
 * @b: pointer 2 param
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
