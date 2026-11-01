#include<stdio.h>
int main()
{
int size;
int c=1;
//char symbol;
printf("Enter the size:");
scanf("%d",&size);
for(int i=1;i<size;i++){
for(int j=1;j<i;j++){
    printf("%d ",c++);
}
    printf("\n");
}
return 0;
}


