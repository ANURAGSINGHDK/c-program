#include<stdio.h>
int factorial(int n)
{
    int x=1;
    for(int i=1;i<=n;i++)
    {
        x=x*i;
    }
    return x;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("The factorial of given number is %d",fact);
    return 0;
}