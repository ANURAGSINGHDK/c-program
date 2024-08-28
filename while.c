#include<stdio.h>
int main()
{
    int count=0;
    int a;
  
    printf("enter number : ");
    scanf("%d",&a);
    while(a>0)
    {
        count++;
        a = a/10;
    }
     printf("%d digits",count);

    return 0;
}