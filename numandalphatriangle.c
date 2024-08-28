/*
1
A B
1 2 3
A B C D
1 2 3 4 5
Print this type of pattern*/


#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the numner of line :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a=1;
        char ch='A';
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            printf("%c ",ch);
            else
            printf("%d ",a);
            a++;
            ch++;
        }
        printf("\n");
    }
    return 0;
}