#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
=======
#include <stdio.h>
#include <unistd.h>
>>>>>>> e04792091a56cb2d347c97fea81958fde3af0734
#include <stdarg.h>

/* Prototype functions*/
int _printf(const char *format, ...);
int deals_char(const char *format, va_list args);
int deals_string(const char *format, va_list args);
int deals_percent(const char *format, va_list args);

#endif 
