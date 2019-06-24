#include<stdio.h>
#include<math.h>

int main()
{

	printf("\n Shubham Arora \n Roll no. 50 \n B.Tech CSE-Big Data")
	
	int n,i=0,a,n1,k=0;
	printf("\n Please Enter a Number in order to find the reverse of that number ");
	scanf("%d",&n);
	n1=n;
	if(n>0)
	{
	    printf("\n The Reverse of the number is ");

		while(n>0)
		{
		    
		    n=n/10;
		    i++;

		}
		while(i>0)
		{

		   a=n1%10;
		   n1=n1/10;
		   k=k+a*pow(10,i);

		   i--;


		}
	}
	else 
		printf(" \n Sorry!!! invalid input ");

    k=k/10;
	printf("%d",k);


}