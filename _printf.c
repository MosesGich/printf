#include "main.h"
#include <stdio.h>
int print_char(char);
/**
 * _printf - a function that functions like printf
 * @format: the value to print
 * @...: other parameters
 * Return: the characters printed
 */
int _printf(const char *format, ...)
{
	va_list lst;
	unsigned int i, strval, ge, j = 0;

	if (format == NULL)
		return (-1);
	va_start(lst, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else if (format[i + 1] == 'c')
			i += print_char(va_arg(lst, int));
		else if (format[i + 1] == 's')
		{
			j += _strcat(va_arg(lst, char*)) - 1;
			i++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			ge = number(va_arg(lst, int));
			i++;
			j += (ge - 1);
		}
		else
			return (0);
		j += 1;
	}
	va_end(lst);
	return (j);
}
/**
 * print_char - a function that prints a character
 * @c: the character to be printed
 * Return: the number of printed characters
 */
int print_char(char c)
{
	_putchar(c);
	return (1);
}
