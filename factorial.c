#include<stdio.h>
int main()
{
    int a;
    int fact=1;
    printf("Enter Number :");
    scanf("%d", &a);
    while(a>0)
    {
        fact= fact*a;
        a=a-1;
    }
    printf("%d is the factorial of given Number",fact);
    return 0;
}