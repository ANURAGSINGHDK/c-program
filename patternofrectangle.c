/*
* * * * * *
* * * * * *
* * * * * *
print  this pattern*/


#include<stdio.h>
int main()
{
    int i,j,l,b;
    printf("Enter the length of the strarred pattern :");
    scanf("%d",&l);
    printf("Enterv the breadth of the starred pattern : ");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}