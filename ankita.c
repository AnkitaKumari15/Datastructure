//SWAPING OF TWO NO. BY USING 3 VARIABLE
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of a and b");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("After swaping a=%d,b=%d",a,b);
return 0;
}
