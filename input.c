#include <stdio.h>

int main()
{
    char name[15];

    printf("Whats your name: \n");
    scanf("%s", name);
    puts(name);
    printf("Hi! %s\n", name);


    return (0);
}
