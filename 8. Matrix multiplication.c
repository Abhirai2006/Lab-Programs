/********************
Matrix multiplication
********************/

#include<stdio.h>
int main(){
    int i,j,k,r1,r2,c1,c2;

    printf("Enter the dimension of matrix A: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the dimension of matrix B: ");
    scanf("%d%d",&r2,&c2);

    if(c1 != r2){
        printf("Matrix multiplication is not possible.\n");
    }

    else{
        int A[r1][c1], B[r2][c2], C[r1][c2];
        printf("Enter the elements of matrix A: ");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                scanf("%d", &A[i][j]);
            }
        }

        printf("Enter the elements of matrix B: ");
        for(i=0; i<r2; i++){
            for(j=0; j<c2; j++){
                scanf("%d", &B[i][j]);
            }
        }

        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                C[i][j] = 0;
                for(k=0; k<r1; k++){
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
            }
        }

        printf("Matrix after Multiplication:\n");
        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
}
