#include "main.h"

/**
 * _str-len - getting length of string of the
 * given string to print
 * @s: string
 *
 * Return: 0 (done)
 */

int _str-len(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
