
#include<stdio.h>
#include<math.h>
void main()
{
    printf("\n Shubham Arora \n Roll no 50 \n B.Tech CSE-Big Data ");
    int bin, dec=0, i=0;
    printf("enter a binary number\n");
    scanf("%d",&bin);
    while(bin>0)
    {
        dec= dec+pow(2,i)*(bin%10);
        bin=bin/10;
        i++;
    }
        printf("the decimal number is\n%d",dec);
    }
