#include "main.h"

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
			switch (*format)/*switch case for specifiers*/
			{
				case 'c':
				{
					char c = va_arg(para, int);/*access on the char's*/
					te_putchar('c');
					re_char++;
					break;
				}
				case 's':
				{
					char *string = va_arg(para, char *);/*acces on strings*/
					while (*string != '\0')
					{
						te_putchar(*string);
						string++;
						re_char++;
					}
					break;
				}
				case '%':
				{
					te_putchar('%');/*printing out %*/
					re_char++;
					break;
				}
			}
		}
		else
		{
			te_putchar(*format);
			re_char++;
		}
	}

	va_end(para);
	return (re_char);
}
