#include "main.h"
/**
 * _printf - check the code
 * @format: check parameter
 * Return: returns value
 */
int _printf(const char *format, ...)
{
structure t[] = {{ "%c", print_character}, {"%s", printf_string}, {"%%", printf_37}, {"%d", print_decimal}, {"%i", print_integer}, {"%b", print_binary}, {"%u", print_unsignedint}};
va_list types;
int h, g = 0, s = 0;
va_start(types, format);

if (format == NULL || (format[0] == '%' && format[g] == '\0'))
	return (-1);
while (format[g] != '\0')
{
	h = 6;
	while (h >= 0)
	{
		if (t[h].id[0] == format[g] && t[h].id[1] == format[g + 1])
		{
			s = s + t[h].f(types);
			g = g + 2;
		}
		h--;
	}
	_putchar(format[g]);
	g++;
	s++;
}
va_end(types);
return (s);
}
