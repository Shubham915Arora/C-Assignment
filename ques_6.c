#include<stdio.h>
#include<math.h>

int main()
{
	printf("\n Shubham Arora \n Roll no. 50 \n B.Tech CSE-Big Data")
	
	int n,n1,ams=0,a;
	printf("\n Please Enter a Number in order to find weather it is an amstrinf number or not ");
	scanf("%d",&n);
	n1=n;
	if(n>0)
	{
	    

		while(n>0)
		{
		    a=n%10;
		    ams=ams+pow(a,3);
		    n=n/10;
		    

		}
	}
	else 
	 printf("\n Sorry!!! Invalid Input ");

	if(n1==ams)
		printf("\n This is an amstrong number ");
	else 
		printf("\n This is not an amsstrong number ");

}