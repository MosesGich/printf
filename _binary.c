#include "main.h"
/**
 *
 *
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
}
