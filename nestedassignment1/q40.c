/*
*****
****
***
**
*
**
***
****
*****
*/
#include<stdio.h>
int main()
{
int i,s,j,n;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i>0; i--)
{
	for(j=1; j<=i; j++)
	{
		printf("*");
	}
	printf("\n");
}
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
	}

