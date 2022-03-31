#include "main.h"
/**
 * check - calculates if a number is prime
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int check(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n<= 1)
		return (0);
	else
		return (check(n, i + 1));
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
