#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a,b,c;
float x1,y1,x2,y2,d;
cout<<"enter the values of a,b,c \n";
cin>>a>>b>>c;
d=((b*b)-4*a*c);
if(d<0)
{
cout<<"real roots are not exist \n";
}
else if(d>0)
{
x1=(-b+d)/2*a;
y1=(-b-d)/2*a;
cout<<"the roots are"<<x1<<y1;
}
else
{
x2=(-b+d)/2*a;
y2=x2;
cout<<"the roots are"<<x2<<y2;
}
}
