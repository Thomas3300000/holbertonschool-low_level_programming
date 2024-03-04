#include "main.h"

/**
 * *_memset - fonction qui remplit la m√©moire avec un octet constat
 * @s: zone point√
 * @b: byte
 * @n: amount
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
