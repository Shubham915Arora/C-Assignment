#include<stdio.h>
int main()
{
	printf("\n Shubham Arora \n Roll no. 50 \n B.Tech CSE-Big Data")

	int a,b,c;

	printf("\n Please Enter 3 numbers in order to find the greatest among them ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		if(b>c||c>b)
			printf("\n %d is greatest among all theese 3 numbers ",a);
	}
	if(b>c&&b>a)
	{
		if(a>c||c>a)
			printf("\n %d is the greatest among all theese 3 numbers ",b);

	}
	if(c>b&&c>a)
	{
		if(b>a||a>b)
			printf("\n %d is the greatest among all theese 3 numbers ",c);
		
	}



}