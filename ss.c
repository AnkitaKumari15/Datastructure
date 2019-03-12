#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void push(int *,int );
void pop(int *);
void traverse(int *);
int TOP=-1;
int main()
{
  int choice, item;
 int stack[5];

  while(1)
{
 printf("\n menu");
 printf("\n 1.push\n");
 printf("\n 2.pop\n");
 printf("\n 3.Traverse\n");
 printf("\n 4.Exit\n");
 printf("\nEnter your choice");
 scanf("%d",&choice);
   switch(choice)
    {
      case 1:printf("\nEnter item value");
             scanf("%d",&item);
             push(stack, item);
             break;
      case 2:printf("\npop");
             pop(stack);
             break;
      case 3:printf("\ntraverse");
             traverse(stack);
             break;
      case 4: exit(0);
   }
}
 return 0;
}
 void push(int stack[],int item)
 {
   if(TOP==MAX)
    {
      printf("stack is full");
      return;
    }
      TOP=TOP+1;
      stack[TOP]= item;
}
  void pop(int stack[])
 {
      int item;
     if(TOP==-1)

     {
     printf("stack is empty");
     return;
    }
   item=stack[TOP];
   TOP=TOP-1;
   printf("Deleted item =%d",item);
 }
 
  void traverse(int stack[])
  { 
     int i;
    if(TOP==-1)
     {
       printf("Stack is empty");
       return ;
     }
     i=TOP;
     while(i>=0)
      {
        printf("%d",stack[i]);
         i--;
      }
}

