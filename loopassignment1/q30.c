//writw a program to print the sum of the first 10 natural numbers.
#include <stdio.h>
int main()
{
int i,n,s=0;
printf("enter the number n");
scanf("%d",&n);
{
for(i=1; i<=n; i++)
{
	s=s+i;
	printf("%d\n",s);
}
}
return 0;
}
