#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char s1[15] = "Kofi", s2[15] = "kofi";
    
    for (i =0; s1[i] != '\0' &&  s2[i] != '\0'; i++)
    {
            if (s1[i] != s2[i] )
            {
                printf("Not same\n"); 
                break;
            }
            else
            {
                printf("Same\n");
                break;
            }
            
    }
    return (0);
}
