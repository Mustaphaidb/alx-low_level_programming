#include <stdio.h>
/**
 * main - Entry Point
 *
 * @void: the function takes no parameters
 *
 * Description: 'TASK9 Print digit separated by , followed by a space'
 *
 * Return: 0 (Success)
*/

int main(void)
{

int N;


N = 48;
while (N <= 57)
{
putchar(N);
if (N == 48 || N < 57)
{
putchar(',');
putchar(' ');
}

N++;

}
putchar('\n');

return (0);
}
