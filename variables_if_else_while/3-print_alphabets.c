#include <stdio.h>
/**
*main - prints alphabet in lowercase then uppercase
*Return: always returns 0
*/
int main(void)
{
char x;
for (x = 'A'; x <= 'Z'; x++)
{
putchar(tolower(x));
}
putchar('\n');
return (0);
}
