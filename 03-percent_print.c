#include "main.h"

/**
 * _percent-print - format specifier for printing a
 * percent character
 *
 * Return: percent
 */

int _percent-print()
{
	return write(1, "%", 1);
}
