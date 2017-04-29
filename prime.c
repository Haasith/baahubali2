#include<stdio.h>
void main()
{
int i,c=0,n;
printf("Enter the value of n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
 if(n%i==0)
 c++;
} 
 if(c==2)
{
 printf("The given number is prime");
}
else
{
printf("The number is not a prime");
}
}
