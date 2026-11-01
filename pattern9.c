#include<stdio.h>
int main()
{
    int line;
    printf("Enter the  lines");
    scanf("%d",&line);
    for (int i=1;i<2*line;i++)
    {
        if(i<=line)
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        else{
            for(int k=i;k<=2*line-1;k++)
            {
                printf("*");
            }
            printf("\n");
            }
        return 0;
        }
   
    }