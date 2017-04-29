#include<stdio.h>
void main()
{
int i,sum=0;
for(i=1;i<20;i=i+2)
{ 
printf("%d\n",i);
}
for(i=1;i<20;i=i+2)
{ 
sum=sum+i;
}
printf("The sum of odd numbers is %d",sum);
}
