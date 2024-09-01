#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d element\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int max, min;
    max=array[0];
    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        else{continue;}
    }
    printf("maximun element is %d\n",max);
    min=array[0];
    for(int i=0;i<n;i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
        else{continue;}
    }
    printf("minimum element is %d",min);
    return 0;
}