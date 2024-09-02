/*
A B C D E F G
A B C   E F G
A B       F G
A           G
print this pattern
*/

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number of row : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        char a='A';
        for(j=1;j<=n+1-i;j++)
        {
            printf("%c ",a);
            a++;
        }
        for(j=1;j<i;j++)
        {
            printf("  ");
            a++;
        }
        for(j=3;j<=i;j++)
        {
            printf("  ");
            a++;
        }
        if(i==1)
        {
            for(j=1;j<n;j++)
            {printf("%c ",a);
            a++;}
        }
        else
        {
            for(j=1;j<=n+1-i;j++)
            {printf("%c ",a);
            a++;}
        }
        printf("\n");
    }
    return 0;
}