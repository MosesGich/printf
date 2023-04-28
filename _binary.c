#include "main.h"
/**
 * bin - a function that prints in binary
 * @a: the integer to be printed
 * Return: the integers printed
 */
int bin(unsigned int a)
{
	char *bin;
	int j, i = 0;

	bin = malloc(sizeof(a));
	while (a > 0)
	{
		bin[i] = a % 2 + '0';
		a /= 2;
		i++;
	}
	j = i - 1;
	for (; j >= 0; j--)
		_putchar(bin[j]);
	free(bin);
	return (0);
}
