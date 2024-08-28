#include<stdio.h>
int main(){
    int a;
    printf("Enter any year : ");
    scanf("%d", &a);
    if(a%4==0){
        printf("%d is the leap year.",a);
    }
    else{
        printf("%d is not a leap year ",a);
    }
    return 0;
}