#include<stdio.h>
int main()
{
    int num=1;
    char symbol;
    printf("Enter the symbol");
    scanf("%c",&symbol); 
   // printf("Enter the number");
    //scanf("%d",&num);
    for(int i=num;i>=1;i++)
    {
        for(int j=1;j<=num;j++)

        printf("%d",j);
    }
    printf("/n");
    return 0;
}