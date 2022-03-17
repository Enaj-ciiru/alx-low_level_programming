#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i = 1;
	unsigned long int a = 1, b = 2, next = 0;

	printf("%lu", a);
	printf(", ");
	printf("%lu", b);
	printf(", ");

	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);
		if (i < 97)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
