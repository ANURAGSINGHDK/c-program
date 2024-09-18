#include<stdio.h>
int main()
{
    int i,j,m,n,a1[10][10],a2[10][10],a3[10][10];
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
    printf("Enter element of a2\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    printf("print element of a3\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            a3[i][j]=a1[i][j]+a2[i][j];
            printf("%d ",a3[i][j]);
        }
        printf("\n");
    }
    return 0;
}