#include "main.h"
/*
 * _strncpy - work exactly like strncpy work exactly like strncpy
 * terminating null byte, using at most an inputted number of bytes.
 * Description: If the length of the source string is
 * less than the maximum byte number
 * @dest - param storing the string copy
 * @src: param that have source string
 * @n: param for the max number of byte copied
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
