#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
typedef struct format
{
	char *id;
	int (*f)();
} structure;
int main(void);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_string(va_list types);
int _strlen(char *str);
int _strlenc(const char *str);
int print_char(va_list types);
int printf_37(void);
int print_integer(va_list types);
int print_decimal(va_list types);
int print_binary(va_list types);
int print_unsignedint(va_list types);
#endif
