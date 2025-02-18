#include<stdio.h>
int main()
{
int a,b,c,sum,average;
printf("enter the value 1:");
scanf("%d",&a);
printf("enter the value 2:");
scanf("%d",&b);
printf("enter the value 3:");
scanf("%d",&c);
sum=a+b+c;
average=sum/3;
printf("the sum of %d %d and %d is %d\n",a,b,c,sum);
printf("the average of %d %d and %d is %d\n",a,b,c,average);
}

