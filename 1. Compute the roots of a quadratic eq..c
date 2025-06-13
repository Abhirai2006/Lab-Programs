/******************
Quadratic Equation
******************/

#include<stdio.h>
#include<math.h>

void main(){
    int a, b, c, dis;
    float x, y, real, imag; //float is used because root can be decimal also

    printf("Enter the coefficient of x^2, x and value of constant: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("\n"); // makes the output look good
    dis = b*b - 4*a*c; // formula for discriminant

    if (dis<0) {
        printf("The roots are imaginary.\n");
        real = -b /(2.0*a);
        imag = sqrt(-dis)/(2.0*a);
        printf("Root 1: %.2f + i(%.2f)\n", real, imag);
        printf("Root 2: %.2f - i(%.2f)\n", real, imag);
    }

    else if (dis==0) { //it comes to this step when the if statement is not true
        printf("The roots are real and equal.\n");
        x = -b /(2.0*a);
        printf("The roots are: %.2f and %.2f\n", x,x); // always a quadratic equation has two values.
    }

    else { //it comes to this step when the else if statement is also not true
        printf("THe roots are real and distinct.\n");
        x = (-b + sqrt(dis))/(2.0*a);
        y = (-b - sqrt(dis))/(2.0*a);
        printf("Roots are: %.2f and %.2f\n", x, y);
    }

    return 0;
}
