#include "main.h"
/**
 * main - check your code
 *
 * Return: o (success)
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
