#include "main.h"
/**
 * _printf - a function that functions like printf
 * @format: the value to print
 * @...: other parameters
 * Return: the characters printed
 */
int _printf(const char *format, ...)
{
	va_list lst, lst2, lst3;
	unsigned int j = 0;
	int arg;

	if (format == NULL)
		return (-1);
	va_start(lst2, format);
	va_start(lst, format);
	va_start(lst3, format);
	arg = va_arg(lst3, int);
	if (arg < 0)
		j = compare(format, lst3);
	else
	{
	while (va_arg(lst, char*))
	{
		j = compare(format, va_arg(lst2, char*));
	}
	}
	va_end(lst);
	return (j);
}

