#include<stdio.h>
int main()
{
    int num;
    printf("enter teh number:");
    scanf("%d",&num);
    switch(num)
    {
        case 10:
        printf("num is 10\n");
        break;

         case 20:
        printf("num is 20\n");
        break;

         case 40:
        printf("num is 40\n");
        break;

        default:
        printf("invalid input");

    }
    return 0;
}
