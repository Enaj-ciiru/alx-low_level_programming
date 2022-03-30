#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	return (check(n, 2));
}
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
