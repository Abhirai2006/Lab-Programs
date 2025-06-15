#include<stdio.h>

int main(){
    int i,n,a=0,b=1,c;
    //a=0, b=1 because the first number of fibonacci series is 0 and second number is 1.

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("First %d fibonacci series i: \n",n);
    for(i=0; i<n; i++){
        printf(" %d\n", a);
        c = a+b;
        a=b;
        b=c;
    }
    return 0;
}
