#include<stdio.h>
int add(int a, int b)
{
    int x=a+b;
    return x;
}
int division(int a, int b)
{
    int x = a/b;
    return x;
}
int multiply(int a, int b)
{
    int x=a*b;
    return x;
}
int main()
 {
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    int sum=add(a,b);
    int product = multiply(a,b);
    int divide = division(a,b);
    printf("summ of two number : %d",sum);
    printf("\nproduct of two number : %d",product);
    printf("\nDivision  of two number : %d",divide);
    return 0;
 }