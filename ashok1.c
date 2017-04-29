#include<stdio.h>
void main( )
{
int n,i,prime;

for(n=2;n<=100;n++)
{
prime=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
prime++;
}
}
if(prime==2)
{
printf("%d\t",n);
}
//printf("%d",n);
}
}
