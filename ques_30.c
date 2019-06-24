#include<stdio.h>
int main()
{
	printf("\n Shubham Arora \n Roll no. 50 \n B.Tech CSE-Big Data")
	int num;
	char ch='y';

	do
	{
		printf("\n Please Enter a number in order to check wether the Entered number is POSITIVE,NEGATIVE or ZERO ");
	    scanf("%d",&num);
		if(num>0)
			printf("\n This is a Positive Number ");
		else if(num<0)
			printf("\n This is a Negative Number ");
		else if(num==0)
			printf("\n It is Zero ");
		printf("\n Do you Want to continue(Y/N) ");
		scanf("%c",&ch);
	
	}while(ch=='Y'||ch=='y');

}