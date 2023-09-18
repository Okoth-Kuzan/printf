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
			if (*format == 'c')
			{
				char c = va_arg(para, int);/*access on the char's*/

				write(1, &c, 1);
				re_char++;
			}
			else if (*format == 's')
			{
				char *string = va_arg(para, char *);/*acces on strings*/

				while (*string != '\0')
				{
					write(1, string, 1);
					string++;
					re_char++;
				}
			}
			else if (*format == '%')
			{
				write(1, '%', 1);/*printing out %*/
				re_char++;
			}
		}
		else
		{
			write(1, format, 1);
			re_char++;
		}
	}
	va_end(para);
	return (re_char);
}
