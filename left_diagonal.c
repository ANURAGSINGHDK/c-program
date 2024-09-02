#include<stdio.h>
int main()
{
    int i,j,m,n,sum=0,a[10][10];
    printf("Enter Row :");
    scanf("%d",&m);
    printf("Enter column : ");
    scanf("%d",&n);
    if(m==n)
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d", sum);
    }
    else{printf("Error");}
    return 0;
}
