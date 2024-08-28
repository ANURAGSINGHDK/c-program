#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d, root1, root2 ;
    printf("Enter Number :");
    scanf("%f",&a);
    printf("Enter Number :");
    scanf("%f",&b);
    printf("Enter Number :");
    scanf("%f",&c);
    d=(b*b) -(4*a*c);
    if(d>=0)
    {
        root1= (-b + sqrt(d))/(2*a);
        root2= (-b - sqrt(d))/(2*a);
        printf("root of the given equation is %f and %f ", root1, root2);
    }
    else
    {
        printf("roots of the given equation is imaginary");
    }
    // printf("Hare Krishna");
    return 0;
}