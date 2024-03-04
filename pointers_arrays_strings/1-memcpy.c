#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: memory area receveid
 * @src: memory area from
 * @n: amount bytes to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
