// pass by value & 
#include<stdio.h>
void swap(int a,int b)
{
int temp = a;
a=b;
b=temp;
return ;
}
int main()
{
int a;
printf("enter the number a");
scanf("%d",&a);

int b;
printf("enter the number b");
scanf("%d",&b);

swap(a,b);

printf("the value of a is %d\n",a);
printf("the value of b is %d\n",b);
return 0;
}
