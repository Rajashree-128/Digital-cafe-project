#include<stdio.h>
int main()
{
    int i=1;

    do{
        printf("%d\n",i);
        if(i==5)
        //continue;
       // printf("hello %d\n",i);
        i++;
        break;
    }while(i>=5);
    printf("outside the loop %d\n",i);
    //i++;
    return 0;
    }
