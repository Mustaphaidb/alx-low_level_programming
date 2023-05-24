#include <stdio.h>
/**
 * main - This is an Entry point
 * Description : "TASK4 print a to z except 'q' and 'e'"
 * @void : The function takes no parameters
 * Return: 0 (Success)
*/
int main(void)
{
char A;

for (A = 'a' ; A <= 'z' ; A++)
if (A != 'q' && A != 'e')
putchar(A);
putchar('\n');

return (0);
}
