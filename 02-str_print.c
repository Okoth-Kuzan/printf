#include "main.h"

/**
 * _print-string - format specifier to print string
 * @string: string to be printed
 *
 * Return: string
 */

char _print-string(const char *string)
{
	int lenth = _print-string(string);
	return write(1, string, lenth);
}
