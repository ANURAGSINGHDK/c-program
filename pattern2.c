#include<stdio.h>
int main()
{
    int c;
    int r;
    char n;
    printf("Enter Row Number : ");
    scanf("%d",&r);
    printf("Enter column : ");
    scanf("%d",&c);
    for(int i=1;i<=r;i++)
    {
        if(i%2==0)
        {
            n=64;
            for(int j=1;j<=i;j++)
            {
                n++;
                printf("%c ",n);
           
            }
        }
        else
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}