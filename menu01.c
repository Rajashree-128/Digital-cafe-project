#include<stdio.h>
int  main()
{
    int option,i;
    do{
    printf("1.pizza=250\n2.mint juice=60\n3.coffee=40\n4.burger=150\n");
    printf("<------Enter the choice:-------->");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        //printf("order plesase\n");
        printf("your order is pizza\n");
        break;

        case 2:
        printf("anything else\n");
        printf("your order is mint juice\n");
        break;
        
        case 3:
        printf("your order is coffee\n");
        break;
        
        case 4:
        printf("your order is burger\n");
        break;


        default:
        if(option>5)
        {
            printf ("sorry option is not availble");
        }
        else{
            printf("anything else:");
        }
        return 0;
        printf("thnaks visit agin");

    }

}