#include<stdio.h>
int main(){
    int n;
    printf("Enter name : ");
    scanf("%d ", &n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
        else{
            continue;
        }
    }
    return 0;
}