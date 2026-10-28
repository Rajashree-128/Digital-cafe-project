#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the charcter");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'A'...'Z':
    printf("Uppercase Alphabet\n");
    break;

    case 'a'...'z':
    printf("Lower case Alphabet\n");
    break;

    case '0'...'9':
    printf("Its a digit \n");
    break;

    default:
    printf("Its a symbol\n");
    return 0;
    }
}