#include<stdio.h>
int main()
{
    int n, i,j;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==(n+1)/2)
        {
            for(j=1;j<=n;j++)
            {
                printf("* ");
            }
        }
        else
        {
        for(j=1;j<n;j++)
        {
            printf(" ");
        }
        printf("*");
        }
        printf("\n");
        
    }    
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int n, i,j;
//     printf("Enter Number : ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             if(j==n || i==(n+1)/2 ){printf("* ");}
//             else{printf(" ");}
//         }
//         printf("\n");
//     }  
     
//     return 0;
// }