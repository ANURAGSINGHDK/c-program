#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value Of a, b and c : ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b){
        if(a>c)
        printf("a is greatest");
        else
        printf("c is gratest");
    }
    else{
        if(b>c)
        printf("b is the gratest ");
        else
        printf("c is the gratest");
    }
    return 0;
}