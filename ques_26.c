#include<stdio.h>
#include<math.h>
void main()
{
    printf("Shubham Arora  \n Roll no 50 \n B.tech CSE-Big Data");
    int n, sum=0, i;
    printf("enter the value of 'n'\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+(pow(i,2));
    }
    printf("the sum of the squares of the 1st 'n' natural numbers is\n%d",sum);
}
