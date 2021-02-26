#include<stdio.h>
int fac(int a){
    if(a == 1){
        return 1;
    }
    return (a*fac(a-1));
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("The factorial of %d is %d\n",a,fac(a));
    return 0;
}