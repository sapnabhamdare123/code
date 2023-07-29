//write a program to display the number names of the digit of if the numbers is 231 then output should be two a number enterded by user for example three one.
#include<stdio.h>
int main()
	{
	int n,s=1,r;
	char l,one,two,three,four,five,six,seven,eight,nine,zero;
	printf("enter the number n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r==1)
		{
			char l='one';
			s=l+s;
			printf("%c",s);
		}
		else if(r==2)
		{
			char l='two';
			s=l+s;
			printf("%c",s);
		}
		if(r==3)
		{
			l='three';
			s=l+s;
			printf("%c",s);
		}
		else if (r==4)
		{
			char l="four";
			s=l+s;
			printf("%c",s);
		}
		if(r==5)
		{
			char l='five';
			s=l+s;
			printf("%c",s);
		}
		else if (r==6)
		{
			char l='six';
			s=l+s;
			printf("%c",s);
		}
		if(r==7)
		{
			char l='seven';
			s=l+s;
			printf("%c",s);
		}
		else if (r==8)
		{
			char l='eight';
			s=l+s;
			printf("%c",s);
		}
		if(r==9)
		{
			char l='nine';
			s=l+s;
			printf("%c",s);
		}
		else if (r==0)
		{
			char l='zero';
			s=l+s;
			printf("%c",s);
		}
		n=n/10;
		printf("%c",s);
		}
		return 0;
		}
		

