#include<stdio.h>
int main()
{
int n,sum=0;
printf("enter the value of n:");
scanf("%d",&n);
while(n>0)
{

    sum=sum+(n%10);
    n=n/10;
}

printf("sum of the digit:%d",sum);

}



