// write a function to comute the greatest common divisor of two given numbers.
#include<stdio.h>
int min(int a, int b)
{
	if (a<b) return a;
	else return b;
}
int gcd(int a,int b)
{
	int hcf;
	for(int i=1; i<=min(a,b); i++)
	{
		if(a%i==0 && b%i==0)
		{
			hcf = i;
		}
	}
	return hcf;
}
int main()
{
int a;
printf("enter 1ts number: ");
scanf("%d",&a);
int b;
printf("enter 2nd number: ");
scanf("%d",&b);
int hcf = gcd(a,b);
printf("the hcf/gcd of %d and %d is %d",a,b,hcf);
return 0;
}
