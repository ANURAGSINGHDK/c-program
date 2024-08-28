#include<stdio.h>
int main(){
    int n;
    int i=1;
    printf("Enter n:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("%d",i);
            i++;
        }
        else{
            i++;
        }
    }
    return 0;
}