#include "main.h"
/**
 *
 *
 */
int check_arg(const char* format)
{
	int i = 0, j = 0;
	while (format[i])
	{
		if (format[i] == '%')
			j = 1;
		i++;
	}
	if (j == 0)
		return (-1);
	else
		return (1);
}
