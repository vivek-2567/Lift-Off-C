#include<stdio.h>

int main(){
    int x, add = 0 ;
    scanf("%d", &x);

    while (x>0)
    {
        add += x%10;
        x /= 10;
    }
    
    printf("%d \n", add);

    return 0;
}