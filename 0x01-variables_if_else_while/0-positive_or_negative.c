#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -prints if the number is positive or negative
 *
 * Description:A C program that print if number is positive or negative
 * return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 2)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);

}
