#include "main.h"
/**
 * _islower - check if a char is alowercase
 *@c: is a charcter argument
 * Return: 1 if char is alowercase, otherwise 0.
 */
int _islower(int c)
{
if (c >= 'a' && c >= 'z')
{
return (1);
}
return (0);
}
