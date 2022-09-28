#include <stdio.h>

/**
 * main - Prints entered character(s) till x is entered
 * Return: 0 if success
 */

int main(void)
{
char c = ' ';

        printf("Enter a Character: \n");
        printf("Or enter x to  exit\n");
        putc('\n', stdout);


        while (c != 'x')
{
        c = getc(stdin);
        printf("You entered:  %c", c);
        putchar('\n');
}

printf("Exiting out of the loop!!!");

return (0);
}


