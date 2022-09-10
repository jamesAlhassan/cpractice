#include <stdio.h>
/**
 * main - Prints out hexdecimal to stdout
 * Return: 0 if success
 */

int main(void)
{
int i = 0;

printf("Hex     Dec\n");

while (i < 10)
{
printf("%x      %d\n", i, i);
putchar('\n');
i++;
}
while (i < 16)
{
printf("%x      %d\n", i, i);
putchar('\n');
i++;
}
return (0);
}
