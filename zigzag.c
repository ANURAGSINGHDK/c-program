#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of Zig-Zag line : ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                if(i%2!=0 && j==k)
                {
                    printf("%d ",a);
                    a++;
                }
                else if (i%2==0 && j+k==n+1)
                {
                    printf("%d ",a);
                    a++;
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}