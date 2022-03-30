#include "main.h"

/**
 * check - checks natural square root of a number
 * @a: number to calculate the sqaure root of
 * @b: iterator
 *
 * Return: the resulting square root
 */
int check(int a, int b)
{
	if (a * a == b)
		return (b);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}
/**
 * _sqrt_recursion - finds natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);
	return (check(1, n));
}
