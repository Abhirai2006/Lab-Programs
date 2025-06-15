#include<stdio.h>

int main(){
    int num1, num2, result;
    char operator;

    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter the operator(+,-,*,/,%%): ");
    scanf(" %c", &operator);
    //leave some space before %c because some time compiler doesn't work properly

    switch(operator){
    case '+':
        result = num1+num2;
        printf("The sum is: %d\n",result);
        break;

    case '-':
        result = num1-num2;
        printf("The difference is: %d\n",result);
        break;

    case '*':
        result = num1*num2;
        printf("The product is: %d\n",result);
        break;

    case '/':
        if(num2 !=0){
            result = num1/num2;
            //Ex. 4/2 = 2, 2/4 = 0.5(it will show zero because it is in int)
            printf("The Quotient is: %d\n",result);
        }
        else{
            printf("Error: Division by 0 is undefined.\n");
        }
        break;

    case '%':
        if(num2 !=0){
            result = num1%num2; //Ex. 4%2 = 0, 2%4 = 2.
            printf("The Reminder is: %d\n",result);
        }
        else{
            printf("Error: Division by 0 is undefined.\n");
        }
        break;

    default:
        printf("Invalid operator.\n");
        break;

    }

}
