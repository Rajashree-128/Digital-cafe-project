#include<stdio.h>
int main()
{
    char dir;
    printf("enter the direction:");
    scanf("%c",&dir);
    switch(dir)
    {
        case 'N':
        case 'n':
        printf("north direction\n");
        break;

        case 'E':
        case 'e':
        printf("East direction\n");
        break;

        case 'S':
        case 's':
        printf("south direction\n");
        break;

        case 'W':
        case 'w':
        printf("west direction\n");
        break;

        default:
        printf("invalid input\n");

    }
    return 0;
}
