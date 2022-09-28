#include <stdio.h>

/**
 * main - reveives and Prints an array at run time
 *
 * Return: 0 if success
 */
void main(void)
{
        int arr[5], i;
        printf("Enter 5 set of numbers: ");
        for (i=0; i < 5; i++)
        {
                scanf("%d",&arr[i]);
        }
       for (i=0; i < 5; i++)
       {
                printf("%d\n", arr[i]);        
       }
}
