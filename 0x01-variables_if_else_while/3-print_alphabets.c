#include <stdio.h>
/**
 * main - This is an Entry Point
 *
 * @void - This function takes no parameters
 *
 * Return: always 0 (success)
*/
int main(void)
{

char A;
for (A = 'a'; A <= 'z'; A++)
putchar(A);

for (A = 'A'; A <= 'Z'; A++)
putchar(A);
putchar('\n');


return (0);
}
