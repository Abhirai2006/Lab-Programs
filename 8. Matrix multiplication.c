#include<stdio.h>

int main(){
    int r1,c1,r2,c2,i,j,k;

    printf("Enter the number of rows and columns of Matrix A: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter the number of rows and columns of Matrix B: ");
    scanf("%d%d",&r2,&c2);

    if(c1 != r2){
        printf("\nMatrix multiplication cannot be performed due to incompatible dimensions.\n");
        return 0;
    }

    int A[r1][c1];
    printf("Enter the elements of Matrix A: ");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            scanf("%d",&A[i][j]);
        }
    }

    int B[r2][c2];
    printf("Enter the elements of Matrix B: ");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            scanf("%d",&B[i][j]);
        }
    }

    int C[r1][c2];
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            C[i][j]=0;
            for(k=0; k<r2; k++){
                C[i][j] =C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix After multiplication:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
