#include<stdio.h>
int main(){
    float r;
    printf("Input the radius of the circle:- ");
    scanf("%f",&r);
    printf("Diameter = %f\n",2*r);
    printf("Circumference = %f\n",2*3.14*r);
    printf("Area = %f\n",3.14*r*r);
    return 0;
}