#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/** more headers goes there
 * main - Entry
 *Description: prints if  the number positive or not
*Return:0
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
