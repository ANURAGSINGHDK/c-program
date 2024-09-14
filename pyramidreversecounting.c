/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
print this number
*/

#include <stdio.h>
int main()
{   
    int i, j, n;
    printf("Enter the numebr of row : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        int a=1;
        for(j=1;j<=n-i;j++)
        {printf("  ");}

        for(j=1;j<=i;j++)
        {printf("%d ",a);
        a++;}

        a--;

        for(j=1;j<i;j++)
        {a--;
        printf("%d ",a);}

        printf("\n");

    }
    return 0;
}