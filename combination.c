#include<stdio.h>
int factorial(int a)
{
    int f=1;
     for(int i=1;i<=a;i++)
        {
            f=f*i;
        }    
        return f;
}
int combination(int n, int r)
{
    int comb = factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}
int main()
    {
        int i, n, r;
        printf("Enter the number of n :");
        scanf("%d",&n);
        printf("Enter the number of r : ");
        scanf("%d",&r);
    
        int ncr= combination(n,r);
        printf("combination of NCR : %d",ncr);
        return 0;
    }
