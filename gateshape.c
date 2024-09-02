/*
* * * * * * * * * * *
* * * * *   * * * * *
* * * *       * * * * 
* * *           * * *
* *               * * 
*                   *
print this pattern
*/

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of row : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
            for(j=1;j<=n-i+1;j++)
            {printf("* ");}
        
        for(j=1;j<i;j++)
        {printf("  ");}

        for(j=3;j<=i;j++)
        {printf("  ");}

         if(i==1)
        {
            for(j=1;j<=n-i;j++)
            {printf("* ");}
        }
        else{
            for(j=1;j<=n-i+1;j++)
            {printf("* ");}
        }

        printf("\n");
    }
    return 0;
}

// second method

// #include <stdio.h>
// int main()
// {
//     int i,j,n;
//     printf("enter the number of row :");
//     scanf("%d", &n);
//     int nsp=1;
//     int nst=n-1;

//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n+1-i;j++)
//         {printf("* ");}
        
//         if(i==1)
//         {
//             for(j=1;j<n;j++)
//             {printf("* ");}
//         }
//         else{
//         for(j=1;j<=nsp;j++)
//         {printf("  ");}
//         for(j=1;j<=nst;j++)
//         {printf("* ");}
//         nsp+=2;
//         nst--;
//         }

//         printf("\n");
//     }
//     return 0;
// }