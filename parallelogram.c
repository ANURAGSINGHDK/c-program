/*
    * * * *
   * * * *
  * * * *
 * * * *
* * * *
*/
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter lenght : ");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++)
    {
       
        for(j=1;j<=n-i;j++)
        {   printf("  ");}
        for(j=1;j<=n;j++)
        {printf("* ");}
       
        printf("\n");
    }
    return 0;
}