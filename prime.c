#include<stdio.h>
int main()
{
    int num=0;
    int flag=1;
    printf("enter the number");
    scanf("%d",&num);
    for(int i=2;i*i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
        if(flag==0)
        {
        printf("It is prime number\n");
        }
        else{
        printf("It is not a prime number\n");
        }
    }
