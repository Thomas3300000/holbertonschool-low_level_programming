#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations single numbers
 * Numbers must be separated by ,, followed by a space
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{

		putchar(num);
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

