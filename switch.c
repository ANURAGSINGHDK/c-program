#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character : ");
    scanf("%c", &ch);

    switch((ch== 'a') || (ch== 'e') || (ch== 'i') ||(ch== 'o') ||(ch== 'u') ) 
    {
        case 1:
    {
    printf("Given character is Vowels");
    break;
    }
    case 0:
    {
        printf("given alphabet is not vowels");
        break;
    }
    }
    return 0;
} 