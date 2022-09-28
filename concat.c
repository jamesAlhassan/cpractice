#include <stdio.h>
#include <string.h>

int main(void)
{
    int len1 = 0, len2 = 0, i =0, j = 0, k;
    char fname[20], lname[20];
    
    printf("Enter Your First Name: ");
    scanf("%s", fname);
    
    printf("Enter Your Last Name ");
    scanf("%s", lname);
    
    /* Length calculation */
    while (fname[i] != '\0')
    {
        len1++;
        i++;
    }
    
    printf("The length of %s is: %d\n", fname, len1);
    
    fname[len1 + 1] = ' ';
    printf("The length of %s is: %d\n", fname, len1);
    
    while (lname[j] != '\0')
    {
        len2++;
        j++;
    }

    printf("The length of %s is: %d\n", lname, len2);
  
    /* Concatenation */

    for (k = 0; k <= len2; k++)
    {
        fname[len1 + k] = lname[k];
    }
    
    puts(fname);

    return (0);
    

}
