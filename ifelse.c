#include<stdio.h>
int main()
{
    int n;
    printf("choose head or tell :");
    scanf("%c",&n);
    if(n=='head')
    printf("You loose");
    else
    printf("You win");
    return 0;
}