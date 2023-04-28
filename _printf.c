#include "main.h"
/**
 * _printf - a function that functions like printf
 * @format: the value to print
 * @...: other parameters
 * Return: the characters printed
 */
int _printf(const char *format, ...)
{
	va_list lst;
	unsigned int j = 0;

	if (format == NULL)
		return (-1);
	va_start(lst, format);
	j = compare(format, lst);
	va_end(lst);
	return (j);
}

