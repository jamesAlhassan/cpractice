#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double Weight;
    double Height;
    double BMI;
    char name[20];

    printf("Please Enter Your Name: ");

    fgets(name, 20, stdin);

    printf("Enter Your Weight in Kilograms:\n");

    scanf("%lf", &Weight);
    
    printf("Enter Your Height in Metres/ Meters:\n");
    
    scanf("%lf", &Height);
    
    Height= Height * Height;
    
    BMI = Weight /Height;
    
    printf("Hi %sYour BMI is %f\n",name, BMI);


    return 0;




}
