#include <stdio.h>

/**
 * main - answers to exercises of Hour 4
 *
 * Return: 0 if success
 */

int main(void)
{
char B, y, e;
B = 'B';
y = 'y';
e = 'e';

int num1 = 123;
float num2 = 123.456;

int num3 = 15;
int num4 = 150;
int num5 = 1500; 

printf("%c %c %c \n", B, y, e);
printf("%-d  %-f\n", num1, num2); // left align
printf("%x %x %x\n", num3, num4, num5); // print nums in hex values
return (0);
}
