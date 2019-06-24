#include<stdio.h>
int main()
{
	printf("\n Shubham Arora \n Roll no. 50 \n B.Tech CSE-Big Data")
	int yr;
	printf("\n Please Enter a number which in order to check weather it is a leep year or not ");
	scanf("%d",&yr);
	if(yr%4==0&&yr%100==0)
		printf("\n This is a leep Year ");
	else 
		printf("\n This is not a Leep Year ");

}