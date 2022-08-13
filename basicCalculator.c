#include <stdio.h>
#include <stdlib.h>


int main()
{


double answer;
char op;
double firstNumber;
double secondNumber;

printf("Enter first number: ");
scanf("%lf", &firstNumber);

printf("Enter Operator ");
scanf(" %c", &op);

printf("Enter second number ");
scanf("%lf", &secondNumber);

if( op =='+'){
answer = firstNumber + secondNumber;
printf("Answer: %f\n", answer);
}else if( op =='-'){
answer = firstNumber - secondNumber;
printf("Answer: %f\n", answer);
}else if( op =='*'){
answer = firstNumber * secondNumber;
printf("Answer: %f\n", answer);
}else if( op =='/'){
answer = firstNumber / secondNumber;
printf("Answer: %f\n", answer);
}









return 0;

}
