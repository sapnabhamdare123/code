/*
*     *
**   **
* * * *
*  *  *
* * * *
**   **
*     *

*/
#include<stdio.h>
int main()
{
int i,n,j;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	for(j=1; j<=n; j++)
	{
	if(i==j || j==n||i+j==n+1 || j==1) printf("*");
	else
	printf(" ");
	}
	printf("\n");
	}
	return 0;
	}
