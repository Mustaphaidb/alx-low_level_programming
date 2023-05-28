#include <stdio.h>
/**
 * main - Entry Point
 *
 * @void: The Function Takes no Parametres
 *
 * Description: 'TASK7 Print Alphabets in reverse using putchar'
 *
 *
 * Return: 0 (Success)
 *
*/
int main(void)
{


char reverse;

for (reverse = 122 ; reverse >= 97; reverse--)
putchar(reverse);

putchar('\n');
return (0);
}
