#include "main.h"
/**
 * compare - a function to compare the formats
 * @format: the type identifier
 * Return: the number of character printed
 */
int compare(const char *format, ...)
{
	va_list lst;
	unsigned int i, j = 0;

	va_start(lst, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
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
		j = j + 1;
	}
	va_end(lst);
	return (j);
}
