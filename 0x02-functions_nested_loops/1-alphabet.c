#include "main.h"
/**
 *print_alphabet - entry point
 *Description: a function that prints the alphabet
 *return : void
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
