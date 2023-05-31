#include "main.h"
/**
 * _puts - void function
 * @str: char pointer
 * Description: 'TASK3 print string'
 * Return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
	_putchar('\n');
}
