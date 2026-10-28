#include<stdio.h>
int main()
{
    int limit,i;
    int num=1;
    printf("Enter  the limit");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++)
    {
        printf("%d",num);
        num=num*2;
    }
    return 0;
}