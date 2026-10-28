#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%2==0)
    {
        n--;
    }
    i=n;
    while(i>0)
    {
        printf("%d ",i);
        i=i-2;
    }
    return 0;
}