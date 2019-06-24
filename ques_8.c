#include<stdio.h>
#include<math.h>

int main()
{
	printf("\n Shubham Arora \n Roll no. 50 \n B.Tech CSE-Big Data")
	int j,k=0,n;
	for(int i=1;i<1000;i++)
	{
		if(i>=10)
		{
			 j=i;
			 while(j>0)
			 {
			 	n=n%10;
			 	k=k+pow(n,3);
			 	j=j/10;
			 }
		if(i==k)
		printf("\n %d",i);

		k=0;

		}
	}
}