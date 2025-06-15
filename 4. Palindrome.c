#include<stdio.h>

int main(){
    int n,r,rev=0,temp;

    printf("Enter a number to be reversed: ");
    scanf("%d", &n);

    temp =n;
    while(n !=0){
        r = n%10;
        rev = rev*10+r;
        n = n/10;
    }

    /**
    (ONLY FOR REFERENCE, DON'T WRITE IT IN THE PROGRAM)
    Ex. If n=18
        r = 18 % 10 = 8
        rev = 0*10+8 = 8
        n = 18/10 = 1

        n=1
        r = 1%10 = 1
        rev = 8*10+1 = 81
        n = 1/10 = 0

        n=0

    **/

    printf("Reverse of %d is %d.\n",temp,rev);
    if(rev==temp)
        printf("%d is a palindrome.\n",temp);
    else
        printf("%d is not a palindrome.\n",temp);
}
