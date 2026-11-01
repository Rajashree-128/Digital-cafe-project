#include<stdio.h>
int main()
{
    int line;
    printf("Enter the  lines");
    scanf("%d",&line);
    for(int i=0;i<line;i++)
    {
        char n ='A';{
        for(int j=0;j<line;j++){
            if(i+j<line-1)
            printf(" ");
            else
            printf("%c",n++);
        }
        printf("\n");
        }
    }
        return 0;
    }
