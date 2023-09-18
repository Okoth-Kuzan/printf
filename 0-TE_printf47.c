#include "main.h"

/**
 * _printf - Custom printf function
 * @format: string format
 * Return: No of characters printed
 */
int _printf(const char *format, ...)
{
	if (format == NULL)
		return (-1);

	va_list args;
	int no_char = 0;

	va_start(args, format);

	while  (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			no_chars++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				putchar(c);
				no_chars++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				if (dtr == NULL)
				{
					str = 'null'
				}
				while (*str)
				{
					putchar(*str);
					str++;
					no_chars++;
				}
			}
			format++;
		}
		va_end(args);

		return (no_chars);
	}
}
