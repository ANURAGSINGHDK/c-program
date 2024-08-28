/*
      *
    * *
  * * *
* * * *
 print this type of pattern*/

//  #include<stdio.h.>
//  int main()
//  {
//     int i,j,n;
//     printf("enter the number of row :");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             if((i+j)<=n) printf("  ");
//             else printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
//  }



 #include<stdio.h.>
 int main()
 {
    int i,j,n;
    printf("enter the number of row :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-1-i;j++)
        {
           printf("  ");
        }
        for( )
        printf("\n");
    }
    return 0;
 }