#include "unistd.h"
#include "main.h"
/**
 * main - Entry point
 *
 * Description: A program that prints _putchar followed by a new line
 *
 * Return : Always 0 (sucess)
 */
int main(void)
{
	char text[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}