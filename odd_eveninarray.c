#include<stdio.h>
int main()
{
    int n;
    int a[n],even[10],odd[10];
    int eidx=0;
    int oidx=0;
    printf("Enter The length of array : ");
    scanf("%d",&n);
    printf("Enter the element of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // for finding ODD EVEN
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even[eidx]=a[i];
            eidx++;

        }
        else{
            odd[oidx]=a[i];
            oidx++;
        }
    }
    printf("print odd even element seperately\n");
    for(int j=0;j<n;j++)
    {
       
       printf("%d ",even[j]);
       
    }
    printf("\n");
    for(int j=0;j<n;j++)
    {
       
       printf("%d ",odd[j]);
       
    }
    return 0;

}