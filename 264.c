#include<stdio.h>
#include<math.h>
void main()
{
int x,s=0,i,j=0,t;
printf("enter the number");
scanf("%d",&x);
t=x*x;
for (i=1;i<=t;)
{
s=(s*10)+t%10;
t=t/10;
}
s=sqrt(s);                                                                               

for(i=1;i<=s;)
{
j=j*10+s%10;
s=s/10;
}
if(x==j)
printf("the number you enterd is magic no\n");
else
printf("not a magic no\n");
}
                                                 
