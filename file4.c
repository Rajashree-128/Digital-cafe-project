#include<stdio.h>
int main()
{
    char ch;
    int num;
    float fnum;
    double dnum;
    printf("Enter the character:");
    scanf("%c",&ch);
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the float value:");
    scanf("%g",&fnum);
    printf("Enter the double value:");
    scanf("%lf",&dnum);
    printf("%d %c %g %lf\n",num,ch,fnum,dnum);
    return 0;

}