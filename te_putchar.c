#include <unistd.h>

/**
 * te_putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: 1 (success)
 * On error, -1 is returned
 */
int te_putchar(char c)
{
	return (write(1, &c, 1));
}
