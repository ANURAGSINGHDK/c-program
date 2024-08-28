/*
*         *
  *    *
     *
  *    *
*         *
print this pattern */

#include<stdio.h>
int main()
{
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    int i,j,n;
    printf("Enter the lenght :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || j+i==n+1)printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}