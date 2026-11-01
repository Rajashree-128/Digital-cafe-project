#include<stdio.h>
int main()
{
    int line;
    printf("Enter the  lines");
    scanf("%d",&line);
    for (int i=0;i<line;i++)
    {
        for(int j=line;j>i;j--)
        {
            if(i+1==j)
            printf("*");
            else
            printf("%d ",j);
        }
        printf("\n");
        }
    }