#include <stdio.h>
/**
 * main - Entry Point
 *
 * @void: The Function takes no parameteres
 *
 * Description: 'TASK6 Print all single digit Numbers base 10 using putchar'
 *
 * Return: 0 (Success)
*/

int main(void)
{

int B;

B = 48;
while (B < 58)
{
putchar(B);
B++;
}
putchar('\n');

return (0);
}
