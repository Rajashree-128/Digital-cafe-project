#include<stdio.h>
int main()
{
int size ;
printf("Enter the size:");
scanf("%d",&size);
for(int i=0;i<=size;i++)
{
char n='A';
for(int j=0;j<=size;j++)
{
    if(i+j<=size)
    printf(" ");
    else 
    printf("%c",n++);
}
 n--;
    for(int k=i; k>1;k--)
    {
    printf("%c",--n);
    }
    printf("\n");
}
return 0;
}




