#include<stdio.h>
int main()
{
    int n,even,odd;
    printf("enter the number");
    scanf("%d",&n);
    
    n % 2==0 ? printf("even\n"):printf("odd\n");
}