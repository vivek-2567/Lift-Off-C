#include<stdio.h>

int main(){
    char s[256];
    int count = 0;

    gets(s);

    for (int i=0; s[i]!='\0'; i++){
        if (s[i] == ' '){
            count++;
        }
    }
    printf("%d\n",++count);

    return 0;
}