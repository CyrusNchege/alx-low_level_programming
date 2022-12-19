#include "main.h"
/**
 * strlen - prints the length of a string
 * @s: pointer param to an array of characters
 * Return: always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (0);
}
