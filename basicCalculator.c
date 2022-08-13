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

/*
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
}else
{
  printf("Invalid Operator\n");
}

*/

/*Using an alternative: switch statement */

switch( op){
    case '+':
        answer = firstNumber + secondNumber;
        printf("Answer: %f\n", answer);
        break;

     case '-':
        answer = firstNumber - secondNumber;
        printf("Answer: %f\n", answer);    
        break;

      case '*':
         answer = firstNumber * secondNumber;
         printf("Answer: %f\n", answer);    
         break;

      case '/':
         answer = firstNumber / secondNumber;
         printf("Answer: %f\n", answer);    
         break;

        default:
            printf("Invalid Operator\n");
}


return 0;

}
