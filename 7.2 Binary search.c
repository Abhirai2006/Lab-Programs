#include<stdio.h>

int main(){
    int n,i,j,temp,element,low,high,mid,found=0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    //Bubble sort is used for sorting
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &element);

    printf("\nSorted elements are: ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    low = 0;
    high = n-1;

    while(low<=high){
        mid = (low+high)/2;
        if(element<arr[mid])
            high = mid-1;
        else if(element>arr[mid])
            low = mid+1;
        else{
            printf("%d found at %d.\n",element,mid+1);
            found =1;
            break;
        }
    }

    if(found==0)
        printf("%d is not found in the array.\n");

}
