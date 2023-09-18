#include "main.h"
#include <stdio.h>

/**
 * _printf - prototype function on
 * printf by Edward & Terance
 *
 * @format: string set to be printed
 * @...: elipse rep, arguments passed
 *
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
	va_list para; /*declaring the variadic list */
	int re_char = 0; /* our set counter*/

	va_start(para, format); /*start access on the arguments*/
	for (; *format != '\0'; format++)
	{
		if (*format == '%')/*check the specifier sign*/
		{
			format++;
			switch (*format)
			{
				case 'c':
				{
					re_char += _char_print(va_arg(para, int));
					break;
				}
				case 's':
				{
					re_char += _print_string(va_arg(para, const char *));
					break;
				}
				case '%':
				{
					re_char += _percent_print();
					break;
				}
			}
		}
		else
		{
			re_char += _char_print(*format);
		}
	}

	va_end(para);
	return (re_char);
}
