#include "main.h"
/**
 * check_arg - a functio that checks for arguments
 * @format: the passed types
 * Return: 1 if success
 */
int check_arg(const char *format)
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
