#include<stdio.h>
#include<math.h>
int main()
{
    int n,b,a,i,count,sum;
  
        
    for(i=1;i<=10000;i++)
    {
        count=0;
        sum = 0;
        for(a=i;a>0;a=a/10)
        {
            count= count +1;
        }
        for(b=i;b>0;b=b/10)
        {
            n=b%10;
            sum=sum+(pow(n,count));

        }
        if(sum==i)
        {
            printf("%d  ",i);
        }
        else
        {
            continue;
        }
    } 
    return 0;
}



