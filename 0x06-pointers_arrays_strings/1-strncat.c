#include "main.h"
/**
 * _strncat - use at most n bytes from src
 * @dest: param for destination value
 * @src: source of the value param
 * @n: the limit of the concatenation
 * Return: dest a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
