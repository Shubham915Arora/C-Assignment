#include<stdio.h>
#include<math.h>
void main()
{
    printf("\n Shubham Arora \n Roll no 50 \n Btech CSE-Big data");
    int n, a, b, sum;
    printf("enter a 3 digit number\n");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    sum=a+b+n;
    printf("the sum of the digits of the number is\n%d",sum);
}
