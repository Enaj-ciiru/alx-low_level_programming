#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	printf("Last digit of %d is %d ", n, l);
	if (l > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (1 == 0)
	{
		printf("and is 0\n");
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
