#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d", &n);

    int i;
    for(i=n;i<=(n*10);i=i+n)
    {
        printf("%d  " ,i);
    }
    return 0;
}