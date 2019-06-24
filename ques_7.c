#include<stdio.h>
int main()
{
	printf("\n Shubham Arora \n Roll no. 50 \n B.Tech CSE-Big Data")
	
	int n,i=0,pf=0,n1;
	n1=n;
	printf("\n Please Enter a number on order to check weather it is a perfect number or not ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			pf=pf+n/i;

		}
		n=n/10;
		i++;
	}
	if(n1==pf)
		printf("\n This is  PERFECT NUMBER ");
	else 
		printf("\n Sorry!!! but this is not a PERFECT NUMBER ");

}