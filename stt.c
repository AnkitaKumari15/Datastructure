//Implementation of stack using array!!!
#include<stdio.h>
# define max 100
int A[max];
int top=-1;
void push(int x)
{ 
 if(top==max-1)
  {
    printf("Overflow");
    return;
  }
   top=top+1;
   A[top]=x;
}
void pop()
 {
   if(top==-1)
  {
    printf("underflow");
    return;
  }
   top=top-1;
 }
int Top()
{ 
  return A[top];
}
Print(){
printf("stack");
for(int i=0;i<=top;i++)
printf("%d",A[i]);
printf("\n");
}
int main()
{
push(1);
push(2);
push(3);
push(4);
Print();
pop();
pop();
pop();
pop();

push(5);
Print();
return 0;
}
 
