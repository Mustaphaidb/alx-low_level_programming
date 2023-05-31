#include "main.h"
/**
 * _strlen - int function
 * @s: char pointer
 * Description: _strlen
 * Return: int
 */

int _strlen(char *s)
{

int len;

for (len = 0; *s != '\0' ; s++)
++len;

return (len);

}
