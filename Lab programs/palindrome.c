#include<stdio.h>

int main (){
    int num,r,rev=0,temp;

    printf("Enter the number u want to reverse. ");
    scanf("%d",&num);
    temp = num;

    while (num !=0){
        r = num%10;
        rev = rev*10 + r;
        num = num/10;
    }
    printf("\nThe reverse of %d is: %d\n",temp,rev);
    if(temp == rev)
        printf("Number is a palindrome\n");
    else
        printf("Number is not a palindrome\n");

}
