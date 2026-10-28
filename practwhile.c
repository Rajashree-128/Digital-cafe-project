#include<stdio.h>
int main()
{
    int i;
    i=1;
    while(i<=10)
    {
        printf("%d\n",i++);
        if(i==3)
        //printf("%d\n",i);
        break;
        i++;
    }
    }