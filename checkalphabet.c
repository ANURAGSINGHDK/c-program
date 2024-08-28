#include<stdio.h>
int main(){
    char a;
    printf(" Enter any Alphabet : ");
    scanf("%c", &a);
    if((a>='a' && a<='z') || (a>='A' && a<='Z')){
        printf("%c is Alphabet",a);
    }
    else{
        printf("%c is not Alphabet");
    }
    return 0;
}