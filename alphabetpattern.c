/*
A B C D
A B C D
A B C D
A B C D
PRINT THIS TYPE OF PATTERN */


#include<stdio.h>
int main()
{
    int i,j,n;
    char ch;
    printf("Enter the number of line :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ch='A';
        for(j=1;j<=n;j++)
        {
                printf("%c ",ch);
                ch++;
        }
        printf("\n");
    }

    return 0;
}