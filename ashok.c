#include<stdio.h>
void main( )
{
int n,i,prime;
prime=3;
for(n=1;n<=100;n++);
{
for(i=1;i<=n;i++);
{
if(n%i==1)
prime=0;
}
break;
if(prime==3);
{
printf("%d\t",n);
}
}
}

