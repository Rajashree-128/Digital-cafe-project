#include<stdio.h>
int main()
{
    int n1,n2,n3;
    float avg;
    printf("enter the value n1 n2 n3:\n");
    scanf("%d %d %d",&n1 ,&n2 ,&n3);
     avg = (float)(n1+n2+n3)/3;
    printf ("%f\n",avg);
    return 0;
}