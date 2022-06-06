#include <stdio.h>
/**
 *main - Prints the alphabet excluding 'q' and 'e'
 *Return: Always returns 0
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
if (x == 'q' || x == 'e')
{
continue;
}
putchar(x);
}
putchar('\n');
return (0);
}
