#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description - 'Task1 print alphabet lowercase'
 * @void : the function takes no parameteres
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
