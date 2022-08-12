#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double Weight;
    double Height;
    double BMI;


    printf("Enter Your Weight in Kilograms:\n");
    scanf("%lf", &Weight);
    printf("Enter Your Height in Metres/ Meters:\n");
    scanf("%lf", &Height);
    Height= Height * Height;
    BMI = Weight /Height;
    printf("Your BMI is %f\n", BMI);


    return 0;




}
