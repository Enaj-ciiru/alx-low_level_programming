#include<unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: Character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
