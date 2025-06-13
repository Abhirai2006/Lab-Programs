/************
Binary search
************/

#include<stdio.h>

int main(){
    int i,j,n,temp,key,found = 0, low, mid, high;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //bubble sort for sorthing
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nThe sorted elements are: ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Enter the element u want to search: ");
    scanf("%d", &key);

    low = 0;
    high = n-1;

    while(low<=high){
        mid = (low + high)/2;
        if(key < arr[mid]){
            high = mid-1;
        }
        else if(key > arr[mid]){
            low = mid+1;
        }
        else{
            printf("Element %d is present at location %d\n",key,mid);
            found = 1;
            break;
        }
    }

    if(found=0){
        printf("Element %d is not present in the array.\n",key);
    }





}
