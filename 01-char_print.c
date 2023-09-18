#include "main.h"

/**
 * _char-print - format specifier for printing
 * characters
 * @c: character to print
 *
 * Return: character
 */

int _char-print(int c)
{
	char stg_loc[1] = {c};
	return (write(1, &c, 1));
}
