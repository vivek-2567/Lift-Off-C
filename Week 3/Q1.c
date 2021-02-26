#include<stdio.h>
int sq(int a){
    return a*a;
}
int main(){
    int a;
    printf("Enter a Number:- ");
    scanf("%d",&a);
    printf("The square of %d is %d\n",a,sq(a));
    return 0;
}