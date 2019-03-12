//linked stack..
#include<stdio.h>
#include<stdlib.h>
struct node {
               int info;
               struct  node *link;
            }*TOP=NULL;
void push();
void pop();
void traverse();
int main()
{
  int choice, item;

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
      case 1:push();
             break;
      case 2:pop();
             break;
      case 3:traverse();
             break;
      case 4: exit(0);
   }
}
 return 0;
}
 void push()
 {
   struct node *new;
   int item;
  new= (struct node *)malloc(sizeof(struct node));
   if(new==NULL)
   {
     printf("Overflow");
     exit(0);
   }
 printf("Enter item value");
 scanf("%d",&item);
 new->info=item;
 new->link=TOP;
  TOP=new;
}
  void pop()
 {
   struct node *tmp;
      int item;
     if(TOP==NULL)
     {
     printf("underflow");
     exit(0);
    }
   tmp=TOP;
   TOP=TOP->link;
   printf("Deleted item =%d",tmp->info);
   free(tmp);
 }
 
  void traverse()
  { 
     struct node *ptr;
     int i;
     if(TOP==NULL)
     {
       printf("Stack is empty");
       exit(0);
     }
     ptr=TOP;
     while(ptr!=NULL)
      {
        printf("%d",ptr->info);
         ptr=ptr->link;
      }
}
