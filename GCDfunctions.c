#include<stdio.h>
#include<math.h>
int greatdiv(int a,int b)
{
     int gcd;
    for(int i=1;i<=a ||i<= b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }

    }
    return gcd;
}
int main()
{
    int a,b;
    printf("Enter a nuumber : ");
    scanf("%d",&a);
    printf("Enter another number : ");
    scanf("%d",&b);

   int x=greatdiv(a,b);
    printf("GCD of a given number is : %d",x);
    
    return 0;
}