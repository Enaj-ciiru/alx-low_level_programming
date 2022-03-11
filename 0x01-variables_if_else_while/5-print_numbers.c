#include<stdio.h>
/**
 * main - prints all single digit numbers
 * from base 10 startting from 0, followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
