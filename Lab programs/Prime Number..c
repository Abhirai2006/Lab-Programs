/*****
Prime number
*****/

int main (){
    int n;
    int count = 0;

    printf("Enter the number u want to check has prime: ");
    scanf("%d", &n);
    for(int i=2; i<n ; i++){
        if (n%i ==0){
            count++;
            break;
        }
    }
    if(count !=0){
        printf("%d is not a prime number.\n",n);
    }
    else {
        printf("%d is a prime number.\n",n);

    }
}
