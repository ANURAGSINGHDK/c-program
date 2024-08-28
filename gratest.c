#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("ENTER THE VALUE OF a : ");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF b : ");
    scanf("%d",&b);
    printf("ENTER THE VALUE OF c : ");
    scanf("%d",&c);
    printf("ENTER THE VALUE OF d : ");
    scanf("%d",&d);
    if(a>b && a>c && a>d )
    {
        printf("%d is the gratest",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("%d is the gratest",b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("%d is the gratest",c);
    }
    else
    {
        printf("%d is the gratest",d);
    }
    return 0;
}