#include "main.h"
/**
 * swap_int - Entry Point
 *
 * @a: int pointer
 * @b: int pointer
 *
 * Description : 'TASK1 swaping values of two integers'
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{

int tmpx;

tmpx = *a;
*a = *b;
*b = tmpx;

}
