#include<stdio.h>
int main(){
    int n, d,  a1=1;
    printf("Enter the number : ");
    scanf("%d", &n);
    // int i;
    for(int i=4;i<=3*n+1;i=i+3)
    {
      
        printf("%d ",i);
    }
    return 0;
}