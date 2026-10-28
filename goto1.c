#include<stdio.h>
int main()
{
    int limit,n=1;
    printf("enter the number:\n");
    scanf("%d",&limit);
    lable:
    printf("%d",n++);
    if(n<=limit)
    goto lable;
    return 0;
}