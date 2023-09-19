#include "main.h"

/**
 * _printf - custom printf function
 * authored by Terance & Edward
 * @format: what to print
 * @...: arguments
 *
 * Return: no. of characters
 */


int _printf(const char *format, ...)
{
	va_list para;
	int re_char = 0;
	int i = 0;

	va_start(para, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; specifiers[i].m != 0; i++)
			{
				if (*format == specifiers[i].m)
				{
					re_char += specifiers[i].n(para);
					break;
				}
			}
			if (specifiers[i].m == 0)
			{
				char c = '%';

				write(1, &c, 1);
				re_char++;
			}
		}
		else
		{
			char c = *format;

			write(1, &c, 1);
			re_char++;
		}
		format++;
	}
	va_end(para);
	return (re_char);
}
