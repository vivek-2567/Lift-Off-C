#include<stdio.h>

int main(){
    int x[256], add1 = 0, add2 = 0, n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        if ((i+1)%2 == 0){
            add1 += x[i];
        }
        if (x[i]%2 == 0){
            add2 += x[i];
        }
    }

    printf("The sum of all even positioned numbers is %d\n",add1);
    printf("The sum of all even numbers is %d\n",add2);
    return 0;
}