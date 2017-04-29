#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float x1,y1,x2,y2,d;
printf("enter the values of a,b,c \n");
scanf("%d%d%d",&a,&b,&c);
d=((b*b)-4*a*c);
if(d<0)
{
printf("real roots are not exist \n");
}
else if(d>0)
{
x1=(-b+d)/2*a;
y1=(-b-d)/2*a;
printf("the roots are %f %f",x1,y1);
}
else
{
x2=(-b+d)/2*a;
y2=x2;
printf("the roots are %f %f",x2,y2);
}
}
