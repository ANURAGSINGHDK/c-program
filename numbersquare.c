/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
print this pattern
*/

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number :");
    scanf("%d",&n);

    int a=0, l,b;
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            l=i;
            b=j;
            if(i>n) 
            {l=2*n-i;}
            if(b>n){b=2*n-j;}
            
            if(l>b) {a=b;}
            else {a=l;}
            printf("%d ",n+1-a);
        }

            printf("\n");
        
    }
    return 0;
}