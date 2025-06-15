#include<stdio.h>

int main(){
    int n,i,element,found=0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elememts of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &element);

    for(i=0; i<n; i++){
        if(arr[i]==element){
            printf("%d is found at index %d.\n",element,i+1);
            found=1;
            break;
        }
    }

    if(found==0)
        printf("%d is not found in the array.\n");

    return 0;
}
