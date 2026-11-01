#include<stdio.h>
int main()
{
    int line;
    printf("Enter the line");
    scanf("%d",&line);
    if(line%2==0){
    printf("invalid");
    return 1;
    }
    for (int i=1;i<=line;i++)
    {
        for(int j=1;j<=line;j++)
        {
            if(i==j||(i+j)==line+1)
            printf("%d",j);
            else
            printf(" ");
        }
        printf("\n");
}
}