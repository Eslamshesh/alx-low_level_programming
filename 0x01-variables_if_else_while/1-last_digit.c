#include <stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main prints a text according number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int n, lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n %10;
if ( lastd > 5){
printf("Last digit of %d is %d is greater than 5" , n , lastd);
}
else if ( lastd == 0){
printf("Last digit of %d is %d is 0 " , n , lastd);
}
else if ( lastd < 6 && lastd != 0)
printf("Last digit of %d is %d and is less than 6 and is not 0", n , lastd);  
return (0);
}
