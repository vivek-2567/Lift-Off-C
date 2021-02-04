#include<stdio.h>

int main(){
    char a;

    printf("Input an alphabet:- ");
    scanf("%c",&a);
    
    if (a>='a'){
        a-=32;
    }
    
    switch(a){
        case 'A':
            printf("Vowels\n");
            break;
        case 'E':
            printf("Vowels\n");
            break;
        case 'I':
            printf("Vowels\n");
            break;
        case 'O':
            printf("Vowels\n");
            break;
        case 'U':
            printf("Vowels\n");
            break;
        default:
            printf("Consonants\n");
    }

    return 0;
}