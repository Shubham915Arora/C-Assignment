#include<stdio.h>
#include<math.h>
void main()
{
    printf("Shubham Arora \n Roll no 50 \n B.tech CSE-Big Data ");
    float n, i, sum=0;
    printf("enter the value of n\n");
    scanf("%f",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+(1/i);
    }
    printf("the sum of the inverses of all the natural numbers till 'n' is\n%f",sum);
}
