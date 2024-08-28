#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of repetetion of HELLO : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("HELLO\n");
    }
    return 0;
}