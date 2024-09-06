#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the row of array : ");
    scanf("%d",&m);
    printf("Enter the column of array : ");
    scanf("%d",&n);
    int array[m][n];
    printf("Enter %d*%d element\n",m,n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    int max, min;
    max=array[0][0];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(array[i][j]>max)
            {
                max=array[i][j];
            }
            else{continue;}
        }
    }
    printf("maximun element is %d\n",max);
    min=array[0][0];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(array[i][j]<min)
            {
                min=array[i][j];
            }
            else{continue;}
        }
    }
    printf("minimum element is %d",min);
    return 0;
}