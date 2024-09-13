/*
         A
       A B 
     A B C
   A B C D
   Print this type of pattern        
*/
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of row :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        char a='A';
        for(j=1;j<=i;j++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}