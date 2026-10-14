#include <stdio.h>

int main()  {
    int number1;
    int number2;

    printf("Input 1st Number: ");
    scanf("%d",&number1);

    printf("Input 2nd Number: ");
    scanf("%d",&number2);

    

    int add,sub,mult;
    float div;
    add=number1+number2;
    sub=number1-number2;
    mult=number1*number2;
    div=number1/number2;
    printf("=====RESULT=====\n");
    printf("Addition: %d\n", add );
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mult );
    printf("Division; %.2f\n", div);

    return 0;
    }