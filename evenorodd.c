#include <stdio.h>
int main()
{
    int a;
    printf("enter name :");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("enven number");
    }
    else
    {
        printf("odd");
    }
    return 0 ;
}