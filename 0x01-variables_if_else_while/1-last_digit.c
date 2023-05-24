#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is an Entry point
 * Description : "TASK1 The last digit"
 * @void : The function takes no parameters
 * Return: 0 (Success)
*/
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
if (n > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, l);
else if (n < 6)
printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
else
printf("Last digit of %d is %d and is 0 ", n, l);


	return (0);
}
