#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],d[10][10];
    int i,j,r,c,k;
    printf("Enter row : ");
    scanf("%d",&r);
    printf("Enter column : ");
    scanf("%d",&c);
    printf("Enter the first matrix element of order %d * %d\n",r,c);
    for(i=0;i<r;i++) //1 33 4 4 545 5 6 66
    {
        for(j=0;j<c;j++) // ek hi line me column change krega 
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix element of order %d * %d\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j]=0;
            for(k=0;k<r;k++)
            {
                d[i][j]+=a[i][k]*b[k][j];
            }
        }
       
    }
    printf("multiplication of  matrix of  element of order %d * %d\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",d[i][j]);
        }
         printf("\n");
    }
    return 0;

}