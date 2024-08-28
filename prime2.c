#include<stdio.h>
int main()
{
int n;
int a = 2;
printf("Enter Number : ");
scanf("%d",&n);
while(n>2)
{
    if(n%a==0)
    {
        printf("%d is not prime number");
        break;
    }
    else{
        a++;
    }
}
printf("%d is the prime number");
return 0;
}