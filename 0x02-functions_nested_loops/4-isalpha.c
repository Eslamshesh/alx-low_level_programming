#include "main.h"
/**
*_isalpha function that checks for alphabets
*@c: parameter to be checked
*Return: 1 for  alphabetic character or 0 for  anything else
*/
int _isalpha(int c)
{
if ((c >= 63 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
