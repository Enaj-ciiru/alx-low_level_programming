#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * then new line
 * Return: Always 0
 */
void more_numbers(void)
{
	int i, k;

	for (k = 0; k <= 9; k++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
