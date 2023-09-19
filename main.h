#ifndef main_h
#define main_h
#define UNUSED_PARAMETER(x) (void)(x)

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* prototype functions*/
int _print_char(va_list para);
int _print_str(va_list para);
int _print_percent(va_list para);

typedef struct spcf
{
	char m; /*format specifier character*/
	int (*n)(va_list);/*pointer to handle function*/
}spcf;

/*specifier structure to support format specifier*/
spcf specifiers[] = 
{
	{'c', _print_char},
	{'s', _print_str},
	{'%', _print_percent},
	{0, NULL}
};


int _printf(const char *format, ...);

#endif
