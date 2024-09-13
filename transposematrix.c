#include<stdio.h>
int main()
{
    int i,j,m,n,a1[10][10],a2[10][10];
    printf("Enter row : ");
    scanf("%d",&m);
    printf("Enter column : ");
    scanf("%d",&n);
    printf("Enter element of a1\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("print transpose matrix of given matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            a2[j][i]=a1[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }
    return 0;
}