#include<stdio.h>
int main()
{
    int Totalcahoclate =13;
    int option,choice;
    int current = Totalcahoclate ;   
    
       do{
        printf("Enter the number of chocolates you want to take:");
        scanf("%d",&option);
        if (option < 1 || option > current)
        {
         
        printf("Invalid choice\n");
         continue;
        }
        
         
        switch(option){
            case 1:
            printf("Player 1 has taken 1 chocolate:\n");
            current = current - option;
            break;

            case 2:
            printf("Player 1 has taken 2 chocolate:\n");
            current = current - option;
            break;

            case 3:
            printf("Player 1 has taken 3 chocolate:\n");
            current = current - option;
            break;

            default:
            printf("Invalid choice");
            break;
        }
        if(current ==0){
          printf("Player1 is a winner and Player2 gets chilly ");
        }
      
        if(current > 0){
          do{
        printf("Enter the number of chocolates:");
        scanf("%d",&choice);
        if (choice < 1 || choice > current)
        {
        printf("Invalid choice\n");
        }
      }while(choice < 1 || choice > current);

       
          switch(choice){
            case 1:
            printf("Player 2 has taken 1 chocolate:\n");
            current= current- choice;
            break;

            case 2:
            printf("Player 2 has taken 2 chocolate:\n");
            current = current - choice;
            break;

            case 3:
            printf("Player 2 has taken 3 chocolate:\n");
            current = current - choice;
            break;
            
            default:
            printf("Invalid choice");
            break;
          }
        
        printf("Remaining chocolates is %d\n",current);
        if(current==0){
          printf("Player2 is the winner and  Player1 gets Chilly\n");
        }
        
      }
    }while(current != 0);

        return 0;
    }