#include<stdio.h>
int main(){
    float a,marks,percent;
    printf("Input marks of Physics:- ");
    scanf("%f",&a);
    marks += a;
    printf("Input marks of Chemistry:- ");
    scanf("%f",&a);
    marks += a;
    printf("Input marks of Biology:- ");
    scanf("%f",&a);
    marks += a;
    printf("Input marks of Maths:- ");
    scanf("%f",&a);
    marks += a;
    printf("Input marks of Computer:- ");
    scanf("%f",&a);
    marks += a;
    percent=marks/5;
    if (percent>=90){printf("Grade A");}
    else if (percent<90 && percent>=80){printf("Grade B");}
    else if (percent<80 && percent>=70){printf("Grade C");}
    else if (percent<70 && percent>=60){printf("Grade D");}
    else if (percent<60 && percent>=40){printf("Grade E");}
    else{printf("Grade F");}
    return 0;
}