#include<stdio.h>
#include<math.h>
void main()
{
    printf("Shubham Arora \n Roll no 50 \n B.tech CSE-Big data");
    int n, i, sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("the sum of the 1st n natural numbers is\n%d",sum);
}
