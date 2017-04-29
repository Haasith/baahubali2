/*program to check whether given number is prime number or not*/
#include<stdio.h>
void main()
{
int num,k=0,i=1;
printf("enter the value of num\n");
scanf("%d",&num);
while (i<=num)
{
if(num%i==0)
k++;
i++;
}
if(k==2)
printf("%d is a prime number",num);
else
printf("%d is not a prime number",num);
}
