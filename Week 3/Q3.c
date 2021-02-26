#include<stdio.h>
int gcd(int a, int b)  
{  
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
} 
int lcm(int a, int b)  
{  
    return (a / gcd(a, b)) * b; 
}  
int main()  
{  
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("LCM of %d and %d is %d \n", a, b, lcm(a, b));
    printf("GCD of %d and %d is %d \n", a, b, gcd(a, b));
    return 0;  
} 