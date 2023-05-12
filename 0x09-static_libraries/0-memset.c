#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @a: address of memory to be filled
 * @v: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */

char *_memset(char *a, char v, unsigned int n)

{
	int i = 0;

	for (; n > 0; i++)
	{
		a[i] = v;
		n--;
	}
	return (a);
}
