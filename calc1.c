#include<stdio.h>
int main()
{
    int n1,n2;
    char op;
    printf("Enter the number:");
    scanf("%d%c%d",&n1,&op,&n2);

    if(op=='/' && n2 ==0)
    {
        printf("we cannot divide a number by zero\n");
        return 1;
    }
    
    switch(op)
    {
    case '+':
    printf("Adition is %d\n",n1+n2);
    break;

    case '-':
    printf("substraction is %d\n",n1-n2);
    break;

    case '*':
    printf("multiplication %d\n",n1*n2);
    break;

    case '/':
    printf("division is %g\n",(float)n1/n2);
    break;

    default:
    printf("invalid input\n");
    return 0;
    }
}