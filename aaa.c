//program to create and display linked list...
#include<stdio.h>
#include<stdlib.h>
void create();
void display();

struct node{
int info;
struct node *link;
};
struct node *start;
int main()
{
  create();
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
