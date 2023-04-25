#include "header.h"
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list lst;
	unsigned int i = 0;

	va_start(lst, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
	}
	va_end(lst);
	return (i);
}
