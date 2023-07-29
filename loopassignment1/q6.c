// drow a flowchart to show hot to find all even natural numbers that are divisible by 7 in a given range input lower and upper limit of the range from the user.
#include<stdio.h>
int main()
{
int a,n;
printf("enter the number a,n");
scanf("%d %d",&a,&n);
for(int a=a ; a<=n; a++);
{
if(a%2==0)
{
	if(a%7==0)
	printf("%d\n",a);
}
}
return 0;
}
