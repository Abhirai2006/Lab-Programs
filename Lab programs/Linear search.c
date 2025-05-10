#include<stdio.h>

int main (){
    int n,i,found=0,element;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &element);

    for(i=0; i<n; i++){
        if(arr[i] == element){
          printf("\n%d is found at index %d\n",element,i);
            found=1;
          break;
        }
    }

    if (found == 0)
        printf("\nThe %d is not found in the array.\n",element);

}
