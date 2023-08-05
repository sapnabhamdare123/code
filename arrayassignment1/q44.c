//bubble sort,
#include<stdio.h>
int main()
{
int n,i,j,p,a,k,t;
printf("enter the number n:\n");
scanf("%d",&n);
int arr[n];
k=0;
for(i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
while(k<n-1)
{
	j=0;
	p=1;
	if(j<n)
	{
		if(p<n-k)
		{
			if(arr[j]>arr[p])
			{
				p=arr[p];
				arr[p]=arr[j];
				arr[j]=arr[p];
				j=j+1;
				p=p+1;
			}
		}
	}
	k=k+1;
}
for(t=0; t<n; t++)
{ 
	printf("%d ",arr[t]=arr[p]);
}
return 0;
}
