#include<stdio.h>
int main()
{
	printf("\n Shubham Arora \n Roll no. 50 \n B.Tech CSE-Big Data")
	int n1,n2,ch;
	printf("\n Please Enter 2 numbers ");
	scanf("%d %d",&n1,&n2);
	
		printf("\n Please choose the operation you want to perform on the given 2 number : ");
		printf("\n 1. ADD");
		printf("\n 2. SUBTRACT");
		printf("\n 3. MULTIPLY");
		printf("\n 4. DEVIDE ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :
			printf("\n Sum of the 2 numbers is %d",n1+n2);
			break;
			case 2: 
			printf("\n Diffrence between the 2 numbers is %d",n1-n2);
			break;
			case 3:
			printf("\n Product of the 2 numbers is %d",n1*n2);
			break;
			case 4:
			printf("\n Quotient of the 2 numbers is %f",n1/n2);
			break;
			default :
			printf("\n You have Entered a Wrong choice ");
      
			break;      

		}
	
}