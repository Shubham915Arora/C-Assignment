#include<stdio.h>
#include<math.h>

int main()
{
	printf("\n Shubham Arora \n Roll no. 50 \n B.Tech CSE-Big Data")
	int n,i=0,a,n1,k=0,n2;
	printf("\n Please Enter a Number in order to find weather it is palindrom or not ");
	scanf("%d",&n);
	n1=n2=n;
	if(n>0)
	{
	   

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
    if(n2==k)
    	printf("\n This is a Palindrome ");
    else 
    	printf("\n This is not a Palindrome ");



}