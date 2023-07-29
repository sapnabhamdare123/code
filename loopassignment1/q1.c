// draw a flowchart to find the sum of the first n nature numbers where n is any given integer.
#include<stdio.h>
int main()
{
int n,i,s=0;
printf("enter the number:\n");
scanf("%d",&n);
for(int i=1;  i <=n; i++) {
	s=s+i;
printf("i:%d\n",s);
}
return 0;
}

