#include<stdio.h>
int rev(int a, int b){
    if (a == 0){
        return b;
    }
    b = (b * 10) + (a%10);
    return rev(a/10,b);
}
int main(){
    int a, temp;
    printf("Enter a number: ");
    scanf("%d",&a);
    temp = rev(a,0);

    if (temp == a){
        printf("The number is a Palindrome.\n");
    }
    else{
        printf("The number is not a Palindrome.\n");
    }

    return 0;
}