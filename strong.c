#include<stdio.h>
int main()
{
    int num,res=0,rem;
    int fact=1;
    printf("enter the number");
    scanf("%d",&num);
    rem =num;
    while(rem!=0)
    {
        int res1=1;
        int temp=num%10;
      for(int i=2;i<=rem;i++)
        temp=temp/10;
        res=res+res1;
    }
    if(res==num)
    printf("strong number%d",res);
    else
    printf("not strong number%d",res);
}