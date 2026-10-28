#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=500;i=i+1)
    {
        printf("%d Hello\n",i);
    }
    printf("outside the loops %d\n",i);
    return 0;
}