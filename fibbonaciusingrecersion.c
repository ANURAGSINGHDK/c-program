#include<stdio.h>
void fibo(int a, int b, int n)
{
    if(n==2)
    return;
    int x= a+b;
    printf("%d ",x);
    a=b;
    b=x;
    fibo(a,b,n-1);
    return;

}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    printf("1 1 ");
    fibo(1,1,n);
    return 0;
}