// write a  program to add two matrices.
#include<stdio.h>
int main()
{
int arr[2][2]={1,2,3,4};
int array[2][2]={5,6,7,8};
int res[2][2];
for(int i=0; i<2; i++)
{
	for(int j=0; j<2; j++)
	{
		printf("%d ",res[i][j]=arr[i][j]+array[i][j]);
	}
printf("\n");
}
return 0;
}

