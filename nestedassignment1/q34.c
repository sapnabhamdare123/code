/*
1
2 3
4 5 6
7 8 9 10
*/
#include<stdio.h>
int main()
{
int n,i,p=1,j;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	for(j=1; j<=i; j++)
	{
		printf("%d ",p);
		p=p+1;
	}
	printf("\n");
	}
	return 0;
	}
		
