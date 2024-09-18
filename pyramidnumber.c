/*
      1
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7
print this pattern
*/
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of row :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        int a=1;
        for(j=1;j<=n-i;j++)
        {printf("  ");}
        
        for(j=1;j<=i;j++)
        {printf("%d ",a);
        a++;}

        for(j=1;j<i;j++)
        {printf("%d ",a);
        a++;}
        
        printf("\n");

    }
    return 0;
}