#include<stdio.h>
#include<math.h>
void main()
{
    printf("\n Shubham Arora \n Roll no. 50 \n B.tech CSE-Big Data ");
    int n, i, fac=1;
    printf("enter the number whose factorial you want to find\n");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+1)
    {
        fac=fac*i;
    }
    printf("the factorial of the number entered is\n%d",fac);
}
