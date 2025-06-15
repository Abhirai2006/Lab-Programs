#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,dis; //discriminant // int 4 byte
    float x,y,real,imag; //float 4 byte

    printf("Enter the coefficients of x^2, x and constant: "); //Telling the user to provide the input
    scanf("%d%d%d", &a,&b,&c); // Storing the input

    dis = b*b-4*a*c;

    if(dis > 0){
        printf("Roots are real and distinct.\n"); //Example: 1 -5 4
        x = (-b + sqrt(dis))/(2.0*a);
        y = (-b - sqrt(dis))/(2.0*a);
        printf("The roots are %.2f and %.2f\n",x,y);
    }

    else if(dis==0){
        printf("Roots are real and equal.\n"); //Example: 1 -4 4
        x = -b / (2.0*a);
        printf("The roots are %.2f and %.2f\n",x,x);
    }

    else{
        printf("The roots are imaginary.\n"); //Example: 1 2 8
        real = -b / (2.0*a);
        imag = sqrt(-dis)/(2.0*a);
        printf("The roots are %.2f+ i(%.2f) and %.2f- i(%.2f)\n",real,imag,real,imag);
    }

}
