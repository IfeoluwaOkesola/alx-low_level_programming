#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 *
 * Description: prints 10 times
 * Return: Always(0)
 */

void print_alphabet_x10(void)
{
	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		alphabet_count++;
		-putchar('\n');
	}
}
