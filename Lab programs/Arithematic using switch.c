#include<stdio.h>
#include<math.h>

int main()
{
    int num1,num2,result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);

    printf("Enter an operator (+,-,*,/,%%): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %d\n", result);
        break;

    case '-':
        result = num1 - num2;
        printf("Result: %d\n", result);
        break;

    case '*':
        result = num1 * num2;
        printf("Result: %d\n", result);
        break;

    case '/':
        if (num2 != 0){
            result = num1 / num2;
            printf("Result: %d\n", result);
        }
        else{
            printf("Error : zero can't be divided.\n");
        }
        break;


    case '%':
        if (num2 != 0){
            result = num1 % num2;
            printf("Result: %d\n", result);
        }
        else{
            printf("Error : zero can't be divided.\n");
        }break;

    default:
        printf("Invalid operator.");
    }
    return 0;
}

