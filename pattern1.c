#include<stdio.h>
int main()
{
int i,j,line,size;
char symbol;
printf("Enter the symbol");
scanf("%c",&symbol);
printf("Enter the number of lines and character\n");
scanf("%d%d",&line,&size);
for(i=1;i<=line;i++)
{
    for(j=1;j<=size;j++)
    {
        printf("%c",symbol);
    }
    printf("\n");
}
}

