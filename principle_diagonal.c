// program to print sum of principle diagonal
#include<stdio.h>
int main()
{
    int i,j,n,m,a[10][10],sum=0;
    printf("Enter Row Number : ");
    scanf("%d",&m);
    printf("Enter Colunm Number : ");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Sum of principle diagonal \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];

            }
        }
        
    }
    printf("%d",sum);
    return 0;
}