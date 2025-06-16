#include<stdio.h>

int main(){
    int n,i,count=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n==0 || n==1 )
       printf("%d is not a prime number.\n",n);
    return 0;
/*
The loop starts from 2 and goes up to n−1,
as we exclude 1 and the number itself when checking for divisors
*/
     for (i=2; i<n; i++){
        if(n%i == 0){
            count++;
        }
     }

/**
    Ex. If n=18
         18%2 = 0
         count++, count = 1

         18%3 =0
         count++, count = 2

         18%4 =2
         count = 2
         ...
         18%17 = 1
         count = 4
     **/

     if(count !=0)
        printf("%d is not a prime number.\n",n);
     else
        printf("%d is a prime number.\n",n);

}
