#include <stdio.h>
/**
*main - prints alphabet in lowercase then uppercase
*Return: always returns 0
*/
int main(void)
{
char x;
char X;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
for (X = 'A'; X <= 'Z'; X++)
{
putchar(X);
}
putchar('\n');
return (0);
}
