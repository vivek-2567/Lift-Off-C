#include<stdio.h>
int main(){
    int c;
    printf("Input the temperature in celsius:- ");
    scanf("%d",&c);
    //printf('\n');
    printf("The temperature in fahrenheit is %d\n",9*c/5+32);
    return 0;
}