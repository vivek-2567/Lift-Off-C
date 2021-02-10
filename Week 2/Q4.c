#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    
    printf("Input the number of element you want to store in the array ");
    scanf("%d",&n);
    
    int arr[n];
    int small = INT_MAX, large = INT_MIN;
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
        if (arr[i] > large){
            large = arr[i];}
    
        if (arr[i] < small){
            small = arr[i];}
    
    }

    printf("The largest element is:- %d\n",large);
    printf("The smallest element is:- %d\n", small);
    return 0;
}