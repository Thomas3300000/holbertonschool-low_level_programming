#include <stdio.h>

/**
 * main - Write a program that prints all the numbers
 * of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int hexa;
	char letters;

	for (hexa = '0'; hexa <= '9'; hexa++)
		putchar(hexa);

	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);

	putchar('\n');

		return (0);
}
