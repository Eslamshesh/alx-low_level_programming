#include "main.h"
/**
 * _slower - check if achar is alowercase
 *c is the char to be checked
 * Return: 1 if char is alowercase, otherwise 0.
 */
int _islower(int c)
{
if (c >= 'a' && c >= 'z')
return (1);
else
return (0);
}
