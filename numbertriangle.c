/*
1
2 3
4 5 6
7 8 9 10
print this type of pattern*/

#include<stdio.h>
int main()
{
    int i,j,n;
    int a=1;
    printf("Enter the number of row : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}