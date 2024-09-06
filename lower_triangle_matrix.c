#include<stdio.h>
int main()
{
    int i,j,m,n,a[10][10];
    printf("Enter row : ");
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
    printf("upper triangular form of the given matrix is as follows\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<i){printf("0 ");}
            else{printf("%d ",a[i][j]);}
        }
        printf("\n");
    }
    }
    else{printf("hang");}
    return 0;
}