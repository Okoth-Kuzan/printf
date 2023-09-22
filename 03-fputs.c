#include "main.h"

/**
 * _puts - prints a string with newline
 * @string: the string to print
 *
 * Return: void
 */
int _puts(char *string)
{
	char *a = string;

	while (*string)
		putchar(*string++);
	return (string - a);
}

