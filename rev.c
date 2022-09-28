#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 0, len = 0, j = 0;
    char name[20] = "Naail";
    char tmp;
    
    while (name[i] != '\0')
    {
        len++;
        i++;
    }

    for (j = 0; j < len / 2; j++)
    {
        tmp = name[j];
        name[j] = name[len - 1 - j];
        name[len -1 - j] = tmp;
    }

    puts(name);

    return (0);
}
