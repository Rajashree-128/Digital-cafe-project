#include<stdio.h>
int main()
{
    int i,n1,n2;
    int num=0;
    printf("Enter  the number");
    scanf("%d%d",&n1,&n2);
    for(i=0;i<n1;i++)
    {
        num=num+n2;
    }
    printf("%d\n",num);
    return 0;
}