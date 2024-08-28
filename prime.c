#include<stdio.h>
int main()
{
    while(1==1){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int i=2;
    int flag=0;
    while(i<n)
    {
        if(n%i==0){
            flag=1;       
            break;
        }
        else{
            i++;
        }
    }
    if(flag==0){
    printf("%d is a prime number",n); 
    }
    else{
         printf("%d is not a prime number",n);
    }

    }
}