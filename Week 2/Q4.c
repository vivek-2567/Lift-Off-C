#include<stdio.h>

int main(){
    int n;
    
    printf("Input the number of element you want to store in the array ");
    scanf("%d",&n);
    
    int arr[n];

    for (int i=0;i<n;i++){

        scanf("%d",&arr[i]);
    
    }

    int small = arr[0], large = arr[0];
    
    for (int j=0; j<n; j++){
    
        if (arr[j] > large){
            large = arr[j];}
    
        if (arr[j] < small){
            small = arr[j];}
    }


    printf("The largest element is:- %d\n",large);
    printf("The smallest element is:- %d\n", small);
    return 0;
}