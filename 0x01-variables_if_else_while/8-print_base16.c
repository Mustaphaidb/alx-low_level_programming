#include <stdio.h>
/**
 * main - Entry Point
 *
 * @void: The function Takes no Parameters
 *
 * Description: 'TASK8 Print digit and Characters base 16 using putchar'
 *
 * Return: 0 (Success)
*/
int main(void)
{

int HEX;

for (HEX = 0x30 ; HEX <= 0x39 ; HEX++)
putchar(HEX);
for (HEX = 0x61; HEX <= 0x66; HEX++)
putchar(HEX);

putchar('\n');

return (0);
}
