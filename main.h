#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/* Prototype functions*/
int _printf(const char *format, ...);
int deals_char(const char *format, va_list args);
int deals_string(const char *format, va_list args);
int deals_percent(const char *format, va_list args);

#endif 
