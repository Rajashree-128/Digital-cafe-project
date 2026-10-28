#include<stdio.h>
int main()
{
    int num;
    //int temp = num;
    int res=0;
    printf("enter the number");
    scanf("%d",&num);
    int temp = num;
    while(num>0)
    {
        res = (num % 10 )+ res * 10;
        num = num / 10;
    }
    printf("Reversed number %d\n",res);
    if(res==temp)
    {
        printf("Palimdrome\n");
    }
    else{
        printf("not a palimdrome\n");
    }
    return 0;
}
