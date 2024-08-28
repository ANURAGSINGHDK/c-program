/*1 2 3 4
  1 2 3 4
  1 2 3 4
  1 2 3 4
Print this type of pattern*/

#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter the number of row : ");
    scanf("%d",&m);
    printf("Enter the number of column :");
    scanf("%d",&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}