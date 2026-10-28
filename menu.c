#include<stdio.h>
int  main()
{
    int option,payment;
    int pizza=0, mintjuice=0, coffee=0, burger=0;
    int amount=0;
    printf("<-------WELLCOME TO CAFE------>\n");
    printf("1.pizza=250\n2.mintjuice=60\n3.coffee=40\n4.burger=150\n");

    do{
       printf("Enter the choice:");
       scanf("%d",&option);

       switch(option)
      {
        case 1:
        printf("your order is pizza\n");
        pizza++;
        amount=amount+250;
        break;
      
        case 2:
        printf("your order is mint juice\n");
        mintjuice++;
        amount=amount+60;
        break;
        
        case 3:
        printf("your order is coffee\n");
        coffee++;
        amount=amount+40;
        break;
        
        case 4:
        printf("your order is burger\n");
        burger++;
        amount=amount+150;
        break;
      
        default:
        printf("sorry option is not availble\n");
      }
    } while(option>=1 && option<=4);

    printf("<------Order Summary------>\n");

    if(pizza>0)
      printf("Pizza:%d\n",pizza);
     if(mintjuice>0)
      printf("Mintjuice:%d\n",mintjuice);
     if(coffee>0)
      printf("coffee:%d\n",coffee);
     if(burger>0)
      printf("Burger:%d\n",burger);

    printf("Total bill Rs:%d\n",amount);
    printf("---Choose payment method---");
    printf("1.UPI\n2. Cash\n3. Card\n");
    scanf("%d",&payment);
    switch(payment)
    {
      case 1:
      printf("UPI\n");
      break;

      case 2:
      printf("Cash\n");
      break;

      case 3:
      printf("Card\n");
      break;

      default:
      printf("Sorry Invalid payment method \n");

    }
  printf("Total Amount Rs:%d Sucessfully Paid\n",amount);
  printf("..Thank u for visiting!..");
  return 0;
}