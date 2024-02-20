#include <stdio.h>

/**
 * main - Ecris l'alphabet en minuscule
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	       putchar(alphabet);

	       alphabet++;
	}
	putchar('\n');
	return (0);
}
