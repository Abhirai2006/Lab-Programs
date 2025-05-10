#include<stdio.h>

int main(){
    int n,i,a = 0,b = 1,c,sum;

    printf("Enter a number:");
    scanf("%d", &n);

    printf("First %d Fibonacci series are:\n", n);

    for (i=1; i<=n; i++){
        printf("%d\n",a);
        c = a+b;
        a=b;
        b=c;
    }
    printf("\n");
    sum = c;
        printf("The sum of the Fibonacci series are: %d \n", sum);
}
