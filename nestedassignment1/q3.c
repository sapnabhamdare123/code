/*
******
******
******
******
*/
#include<stdio.h>
int main()
{
int i,n,j;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=4; i++)
{
	for(j=1; j<=n; j++)
	{
		printf("*");
	}
	
printf("\n");
}
return 0;
}
