#include<stdio.h>
void main()
{
int n,i=1,a,c=0,d;
printf("enter the number");
scanf("%d",&n);
d=n;
while(n!=0)
{
a=n%10;
c=c+(a*a*a);
n=n/10;
}
if(d==c)
{
printf("armstrong no");
}
else
printf("not a armstrong no");
}

