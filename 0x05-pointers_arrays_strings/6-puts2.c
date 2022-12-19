#include "main.h"
/**
 * puts2 - prints every other char of a string starting with first character
 * @str: pointer param that points to a string
 * Return: 0
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);
	_putchar('\n');
}
