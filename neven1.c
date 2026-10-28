#include<stdio.h>
int main()
{
    int limit,i;
    printf("Enter  the limit");
    scanf("%d",&limit);
    for(i=2;i<=limit;i+2)
    {
        printf("%d ",i);
    }
    return 0;
}