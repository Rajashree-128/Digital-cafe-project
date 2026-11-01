#include<stdio.h>
int main()
{
    int line;
    printf("enter number");
    scanf("%d",&line);
    int i=1;
    {
        while(i<=line)
        {
            int j=1;
            while(j<=line)
           {
            printf("%d",i);
           }
            j++;
            printf("\n");
            i++;
            }
        }
    }