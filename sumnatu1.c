#include<stdio.h>
int main()
{
    int limit,i,sum;
    float avg;
    printf("Enter  the limit");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++)
    {
    sum = sum+i;
    avg=sum/limit;
    }
     printf("sum of  %dis natural :%d",limit,sum);
     printf("%f\n",avg);
    return 0;
}