#include "main.h"

/**
 * print_alphabet_x10 - prints a to z 10 times
 *
 * Description: 'task 2'
 *
 * @void: does not take any parameters
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int a = 0;
	char b = 'a';

	for (; a < 10; a++)
	{
		for (; b <= 'z'; b++)
		{
			_putchar(b);
		}
		b = 'a';
		_putchar('\n');
	}
}
