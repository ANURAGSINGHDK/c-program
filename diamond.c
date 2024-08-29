/*
        
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
  * * * * * * *
    * * * * *
      * * *
        *
print this pattern
*/
// first method

#include<stdio.h>
int main()
{
    int i, j, n;
    printf("enter the number of row for diamond : ");
    scanf("%d",&n);

    for(i=1;i<=(n/2)+1;i++)
    {
        for(j=1;j<=(n/2)+1-i;j++)
        {printf("  ");}

        for(j=1;j<=i;j++)
        {printf("* ");}

        for(j=1;j<i;j++)
        {printf("* ");}

        printf("\n");
    }
    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=i;j++)
        {printf("  ");}

        for(j=1;j<=n/2-i;j++)
        {printf("* ");}

        for(j=0;j<=n/2-i;j++)
        {printf("* ");}

        printf("\n");
    }
    return 0;
}


// Second method

// #include<stdio.h>
// int main()
// {
//   int i,j,n;
//   printf("Enter the number of row :");
//   scanf("%d",&n);

//   int x=(n/2)+1;
//   int nsp=x-1;
//   int nst=1;
//   for(i=1;i<=n;i++)
//   {
//     for(j=1;j<=nsp;j++)
//     {
//       printf("  ");
//     }  
//     for(j=1;j<=nst;j++)
//     {
//       printf("* ");
//     }  
//       if(i<x)
//       {
//         nsp--;
//         nst+=2;
//       }
//       else{
//         nsp++;
//         nst-=2;
//       }
    
//     printf("\n");
//   }
//   return 0;
// }