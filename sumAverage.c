#include <stdio.h>

/**
 * main - calculates the sum and average of 5 students
 *
 * Return: void
 */

void main(void)
{
    int i,avg, sum =0, arr[5];
    printf("Enter your score: \n");

    for (i=0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    avg = sum / 5;
    printf("Your average scoreof %d / 5 is : %d\n", sum, avg);
}
