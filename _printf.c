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
	unsigned int i, a, j = 0;

	va_start(lst, format);
	if (va_arg(lst, int))
	{
		a = check_arg(format);
		if (a != 1)
			return (0);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(lst, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			int strval = _strcat(va_arg(lst, char*));

			i++;
			j += (strval - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		j += 1;
	}
	va_end(lst);
	return (j);
}

