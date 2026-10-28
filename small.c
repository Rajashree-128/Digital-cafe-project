#include<stdio.h>
int main()
{
  int n1,n2,n3;
  int small;
  printf("Enter the numbers:");
  scanf("%d %d %d",&n1,&n2,&n3);
  if(n1<n2)
  {
    if(n1<n3)
      small=n1;
   // printf("%d is smallest",n1);
    else
      small=n3;
      // printf("%d is smallest",n3);
  }
    else
    {
    if(n2<n3)
      small=n2;
      //printf("%d is smallest",n2);
    else
       small=n3;
       printf(" %d number smallest\n",small);
       return 0;
    }
  }
  
