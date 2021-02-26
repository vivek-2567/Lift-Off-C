#include<stdio.h>
int fac(int a){
    int b = 1;
    for (int i=2;i<=a;i++){
        b *= i;
    }
    return b;
}
int main(){
    int x;
    printf("Enter a number:- ");
    scanf("%d",&x);
    printf("The factorial of %d is %d\n",x,fac(x));
    return 0;
}