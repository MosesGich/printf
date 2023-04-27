#include "main.h"
/**
 *
 *
 */
void compare(const char *format, ...)
{
	va_list lst;
	unsigned int i, j = 0;

	va_start(lst, format);
	for (i = 0; format[i] != '%'; i++)
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
		j += 1;
	}
	va_end(lst);
	return (j);
}
