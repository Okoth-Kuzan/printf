#include "main.h"
#include <stdio.h>

/*
 * _printf - prototype function of printf
 * @format: format
 * @... : argumaents
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list para;
	int re_char = 0;

	va_start(para, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			char c = *format;

			write(1, &c, 1);
			re_char++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(para, int);

				write(1, &c, 1);
				re_char++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(para, char *);

				while (*str != '\0')
				{
					write(1, str, 1);
					str++;
					re_char++;
				}
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				re_char++;
			}
		}
		format++;
	}
	va_end(para);
	return (re_char);
}
