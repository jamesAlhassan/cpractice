#include <stdio.h>

int main(void)
{
    int arrInt[10];

    printf("Size of int: %ld\n", sizeof(int));
    printf("Size of arrInt: %ld\n", sizeof arrInt);
    printf("Address of arrInt: %p\n", &arrInt);
    printf("Address of arrInt[0] : %p\n", &arrInt[0]);

    return (0);
}
