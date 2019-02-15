#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void dup();

struct node{
int info;
struct node *link;
};
struct node *start;
int main()
{
  create();
  display();
  dup();
  display();
 return 0;
}

void create()
{
struct node *tmp,*ptr;
int item;
char ch='y';
while(ch=='y'||ch=='Y')
{
 tmp=(struct node *)malloc(sizeof(struct node));
 if(tmp==NULL)
{
printf("memory overflow");
exit(0);
}
printf("enter info value ");
scanf("%d",&item);
tmp->info=item;
tmp->link=NULL;

if(start==NULL)
    start=tmp;
else
{
 ptr=start;

  while(ptr->link!=NULL)
     ptr=ptr->link;

  ptr->link=tmp;
}
 printf("do u want to add more node--->");
 scanf(" %c",&ch);

}
}


void display()
{
struct node *ptr;

if(start==NULL)
{
printf("list is empty");
exit(0);
}


else
{
printf("\n");
ptr=start;
//printf("\n");
while(ptr!=NULL)
{
printf("\t%d",ptr->info);
ptr=ptr->link;
}
}
}
void dup()
{
struct node *ptr,*ptr1,*prev,*tmp;
int data;

if(start==NULL)
{
  printf("List is empty");
  return;
}
  ptr=start;
  while(ptr!=NULL)
{
  data=ptr->info;
  prev=ptr;
  ptr1=ptr->link;
  while(ptr1!=NULL)
 { 
    if(data==ptr1->info)
     {
       tmp=ptr1;
       prev->link=ptr1->link;
       ptr1=ptr1->link;
       free(tmp);
      }
    else
     {
       prev=ptr1;
       ptr1=ptr1->link;
     }
   } 
     ptr=ptr->link;
  }
}

